#include<iostream>
#include<Windows.h>
#include<string>


//��վ404����
//��վ�۸Ĺ���
//��վ������¼
//DNS����
//����������

//���ܲ˵�
void menu() {
	std::cout << "1.��վ404����" << std::endl;
	std::cout << "2.��վ�۸Ĺ���" << std::endl;
	std::cout << "3.��վ������¼" << std::endl;
	std::cout << "4.DNS����" << std::endl;
	std::cout << "5.����������" << std::endl;
}

int main(void) {
	//��¼
	std::string name;
	std::string pwd;

	while (1) {
		std::cout << "�������˺ţ�" << std::endl;
		std::cin >> name;
		std::cout << "���������룺" << std::endl;
		std::cin >> pwd;
		if (name == "54hk" && pwd == "123456") {
			menu();
			std::cout << "���������ѡ��" << std::endl;
			int choose;
			std::cin >> choose;

			switch (choose) {
			case 1: {
				break;
			}
			case 2: {
				break;
			}
			case 3: {
				break;
			}
			case 4: {
				break;
			}
			case 5: {
				break;
			}
			default:
				break;
			}
		}
		else {
			std::cout << "�˻�����������\n";
			system("pause");
			system("cls");
		}
	}

	system("pause");
	return 0;
}