//
// 15745 - Set Dethrashing
// Authors: Zhe Qian, Prashanth Suresh, Adu Bhandaru
//

#include "util.h"

using std::cout;
using std::endl;

Util::Util() { };

void Util::print_matrix(float* matrix, size_t m, size_t n) {
	for(size_t i = 0; i < m; i++) {
		for(size_t j = 0; j < n; j++) {
			cout << matrix[i * m + j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
