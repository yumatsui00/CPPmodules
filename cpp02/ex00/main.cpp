#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}

// 基本的な役割
//コンストラクター　→ 初期化
//コピーコンストラクター　→ 初期化されてないオブジェクトを作成とともにコピー
//コピーアサインメント演算子　→ すでに初期化されたオブジェクトをc = bのように全て書き換える

//overload
//関数→同じ名前の関数を異なる引数リストで定義し、呼び出し時に適切な関数を選択
//演算子→演算子をユーザー定義型に対して適用できるようにする