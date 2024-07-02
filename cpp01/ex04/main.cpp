#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Invalid args: format : ./ex04 filename str1 str2" << std::endl;
		return 0;
	}

	std::string	filename = argv[1];
	std::string	str1 = argv[2];
	std::string str2 = argv[3];

	//!ファイルオープン
	std::ifstream inputFile(filename);
	if (!inputFile.is_open()) {
		std::cerr << "Error: unable to open input file: " << filename << std::endl;
		return 0;
	}
	//ifstream クラス　inputFile(filename) : filenameで指定されたパスのファイルをひらく(open 関数)
	//is_open() ファイルが開いてたらtrue 開いてなかったらfalse

	//!outfile open
	std::ofstream outputFile("outfile");
	if (!outputFile.is_open()) {
		std::cerr << "Error: unable to open output file" << std::endl;
		inputFile.close();
		return 0;
	}

	//!ファイル読み込み
	std::string infile;
	std::string line;
	while (std::getline(inputFile, line)) {
		infile += line + "\n";
	}

	//!置換
	std::string outfile;
	size_t	start = 0;
	size_t	end;
	while ((end = infile.find(str1, start)) != std::string::npos) {
		outfile += infile.substr(start, end - start) + str2;
		start = end + str1.length();
	}
	outfile += infile.substr(start);
	//find() : 文字列のstart番目からstr1があるかどうかを検索し、あった場合はその位置の先頭を返す。なかったたnpos
	//substr(): stringっのstart から　endまでを抽出してくる。一つだけならそこから最後まで。

	//!アウトプットファイルに入力
	outputFile << outfile;

	inputFile.close();
	outputFile.close();
}