#include <iostream>
#include <cstdint>

//���ꂠ���Ă�H�H
//is this valid??

//true bank calc is dont use IEEE954.binaryXXX!! sometimes lost your job.

template<class Float=double,class Int=std::uintmax_t>
Int �����v�Z(const Float& ���{, const Float& ����, const Int& ����) {
	
	Float R = ���{;
	
	for ( Int i = 0; i < ����; i++) {
		R = R+ (R * ((���� / 100.0) / ����));
	}

	return R;
}
template<class Float=double,class Int=std::uintmax_t>
Int �P���v�Z(const Float& ���{, const Float& ����, const Int& ��) {
	
	Float R = ���{;
	
	for ( Int i = 0; i < ��; i++) {
		R = R+ (R * (���� / 100.0));
	}

	return R;
}

int main() {
	std::uintmax_t N = 100000000;
	double P = 0.1;
	auto  R = �����v�Z<double>(N, P, 365);
	auto R2 = �P���v�Z<double>(N, P, 2);

	return 0;
}