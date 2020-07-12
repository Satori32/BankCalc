#include <iostream>
#include <cstdint>

//これあってる？？
//is this valid??

//true bank calc is dont use IEEE954.binaryXXX!! sometimes lost your job.

template<class Float=double,class Int=std::uintmax_t>
Int 複利計算(const Float& 元本, const Float& 利率, const Int& 日数) {
	
	Float R = 元本;
	
	for ( Int i = 0; i < 日数; i++) {
		R = R+ (R * ((利率 / 100.0) / 日数));
	}

	return R;
}
template<class Float=double,class Int=std::uintmax_t>
Int 単利計算(const Float& 元本, const Float& 利率, const Int& 回数) {
	
	Float R = 元本;
	
	for ( Int i = 0; i < 回数; i++) {
		R = R+ (R * (利率 / 100.0));
	}

	return R;
}

int main() {
	std::uintmax_t N = 100000000;
	double P = 0.1;
	auto  R = 複利計算<double>(N, P, 365);
	auto R2 = 単利計算<double>(N, P, 2);

	return 0;
}