#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <fstream>
# include "Data.hpp"

class Serializer {
public:
	Serializer() {};
	~Serializer() {};
	Serializer( Serializer& src ) {
		(void)src;
	};
	Serializer	operator=( Serializer& rhs ) {
		(void)rhs;
		return *this;
	};

	uintptr_t	serialize(Data* ptr) {
		return reinterpret_cast<uintptr_t>(ptr);
	};
	Data*		deserialize(uintptr_t raw) {
		return reinterpret_cast<Data*>(raw);
	};
} ;

#endif



//dynamic_cast
//dynamic_castはC++で安全なダウンキャストやクロスキャストを行うためのキャスト演算子です。
//実行時型情報（RTTI）を利用し、ポインタの場合キャストが失敗するとnullptrを返し、参照の場合はstd::bad_cast例外をスローします。
//仮想関数を持つクラスでのみ使用可能です。ポリモーフィックなキャストを安全に行うために使用されます。

//static_cast
//static_castはC++で明示的な型変換を行うためのキャスト演算子です。コンパイル時に型チェックが行われ、
//安全性はdynamic_castより低いですが、オーバーヘッドが少ないです。
//基本的な型変換や、多態を利用しない基底クラスから派生クラスへのキャストに使用されます。不適切なキャストは未定義動作を引き起こす可能性があります。

//reinterpret_cast
//reinterpret_castはC++でポインタ型の再解釈を行うためのキャスト演算子です。ポインタのビットパターンを直接再解釈し、
//完全に異なる型への変換を行います。非常に危険なキャストであり、通常は避けるべきです。
//不適切な使用はプログラムの不安定性やクラッシュを引き起こす可能性が高いです