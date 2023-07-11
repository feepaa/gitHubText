#include<iostream>
#include<Windows.h>
#include<string>


//ÍøÕ¾404¹¥»÷
//ÍøÕ¾´Û¸Ä¹¥»÷
//ÍøÕ¾¹¥»÷¼ÇÂ¼
//DNS¹¥»÷
//·şÎñÆ÷ÖØÆô

//¹¦ÄÜ²Ëµ¥
void menu() {
	std::cout << "1.ÍøÕ¾404¹¥»÷" << std::endl;
	std::cout << "2.ÍøÕ¾´Û¸Ä¹¥»÷" << std::endl;
	std::cout << "3.ÍøÕ¾¹¥»÷¼ÇÂ¼" << std::endl;
	std::cout << "4.DNS¹¥»÷" << std::endl;
	std::cout << "5.·şÎñÆ÷ÖØÆô" << std::endl;
}

int main(void) {
	//µÇÂ¼
	std::string name;
	std::string pwd;

	while (1) {
		std::cout << "ÇëÊäÈëÕËºÅ£º" << std::endl;
		std::cin >> name;
		std::cout << "ÇëÊäÈëÃÜÂë£º" << std::endl;
		std::cin >> pwd;
		if (name == "54hk" && pwd == "123456") {
			menu();
			std::cout << "ÇëÊäÈëÄãµÄÑ¡Ôñ" << std::endl;
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
			std::cout << "ÕË»§»òÃÜÂëÓĞÎó\n";
			system("pause");
			system("cls");
		}
	}

	system("pause");
	return 0;
}