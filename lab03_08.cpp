#include <iostream>
int main() {
	int array[3] = { 8,1,7 };
	/* �ڵ� �ۼ� */ // array �迭�� ����Ǵ� ���۷��� �迭 re ����
	/* �ڵ� �ۼ� */ // re�� �� �Է�
	int(&re)[3] = array;
	re[1] = 7;
	re[2] = 1;
	std::cout << "Array: " << array[0] << array[1] << array[2] << std::endl;
	std::cout << "Reference: " << re[0] << re[1] << re[2] << std::endl;
	return 0;
}