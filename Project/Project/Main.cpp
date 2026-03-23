#include <iostream>

using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion)
{
	*p_HPPotion = count;
	*p_MPPotion = count;
}
int main()
{
	const int SIZE = 8;
	int status[SIZE] = { 0 };

	while (1)
	{
		cout << "HP와 MP를 입력해주세요 : ";
		cin >> status[0] >> status[1];

		if (status[0] > 50 && status[1] > 50)
		{
			break;
		}
		cout << "HP나 MP 값이 너무 작습니다 다시 입력해주세요." << endl;
	}
	while (1)
	{
		cout << "공격력과 방어력을 입력해주세요 : ";
		cin >> status[2] >> status[3];

		if (status[2] > 0 && status[3] > 0)
		{
			break;
		}
		cout << "공격력이나 방어력의 값이 너무 작습니다. 다시 입력해주세요." << endl;
	}
	while (1)
	{
		cout << "힘,지력,민첩,행운 입력해주세요 : ";
		cin >> status[4] >> status[5] >> status[6] >> status[7];

		if (status[4] > 0 && status[5] > 0 && status[6] > 0 && status[7] > 0)
		{
			break;
		}
		cout << "힘,지력,민첩,행운의 값이 너무 작습니다. 다시 입력해주세요." << endl;
	}
	int choice = 0;
	int HPPotion = 0;
	int MPPotion = 0;
	int Level = 1;

	setPotion(5, &HPPotion, &MPPotion);

	cout << "* 포션이 지급되었습니다. (HP, MP 포션 각 5개)" << endl;
	cout << "=============================================" << endl;
	cout << "<스탯 관리 시스템>" << endl;
	cout << "1. HP UP" << endl;
	cout << "2. MP UP" << endl;
	cout << "3. 공격력 UP" << endl;
	cout << "4. 방어력 UP" << endl;
	cout << "5. 현재 능력치" << endl;
	cout << "6. Level UP" << endl;
	cout << "0. 나가기" << endl;

	while (1)
	{
		cout << "번호를 선택해주세요 : ";
		cin >> choice;

		if (choice == 0)
		{
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		switch (choice)
		{
		case 1:
			if (HPPotion <= 0) {
				cout << "포션이 부족합니다." << endl;
				continue;
			}
			status[0] += 20;
			HPPotion--;
			cout << " * HP가 20증가 하였습니다. 포션이 1개 차감됩니다." << endl;
			cout << "현재 HP : " << status[0] << endl;
			cout << "남은 포션 수: " << HPPotion << endl;

			break;

		case 2:
			if (MPPotion <= 0)
			{
				cout << "포션이 부족합니다." << endl;
				continue;
			}
			status[1] += 20;
			MPPotion--;
			cout << " * MP가 20증가 하였습니다. 포션이 1개 차감됩니다." << endl;
			cout << "현재 MP : " << status[1] << endl;
			cout << "남은 포션 수:" << MPPotion << endl;

			break;
		case 3:
			status[2] *= 2;
			cout << " * 공격력이 2배로 증가되었습니다." << endl;
			cout << "현재 공격력 : " << status[2] << endl;

			break;

		case 4:
			status[3] *= 2;
			cout << " * 방어력이 2배로 증가되었습니다." << endl;
			cout << "현재 방어력 : " << status[3] << endl;

			break;
		case 5:
			cout << "HP :" << status[0] << " MP :" << status[1] << " 공격력 :" << status[2] << " 방어력 :" << status[3] << " 레벨 :" << Level << " 남은 포션 수:" << HPPotion << "/" << MPPotion << endl;
			cout << "힘 :" << status[4] << " 지능 :" << status[5] << " 민첩 :" << status[6] << " 행운 :" << status[7] << endl;
			break;

		case 6:
			Level++;
			MPPotion++;
			HPPotion++;
			cout << " * 레벨업 : HP/MP 포션이 지급됩니다. " << endl;
			cout << "남은 HP/MP 포션 수 : " << HPPotion << "/" << MPPotion << endl;

			break;
		default:
			cout << "다시 입력해 주세요." << endl;
			break;
		}


	}

	return 0;
}