#include <iostream>
#include <ctime>
using namespace std;

int aiNum; //������ �Ǵ� ���ڸ� ���� ����
int aiNum1, aiNum2, aiNum3;
int pNum; //�÷��̾ �Է��ϴ� ���ڸ� ���� ����
int pNum1, pNum2, pNum3;

int answer[3];
int pNumArray[3];

void generateAnswer();
void gameLoop();

int main() {

	generateAnswer();

	cout << "���ھ߱� ����!" << endl; //���ӽ��ۿ� ���� �ȳ� ����

	gameLoop();

	return 0;
}

void generateAnswer() {
	//���� �� 3�� ����
	do { //do�ݺ����� ����ϴ� ������ ���ǿ� aiNum1, aiNum2, aiNum3�� ���µ� ���� ���� ���� �ʾұ� ����
		srand((unsigned int)time(NULL)); //������ �����
		aiNum1 = rand() % 10; //0~9 ������ aiNum1 ����
		aiNum2 = rand() % 10; //0~9 ������ aiNum2 ����
		aiNum3 = rand() % 10; //0~9 ������ aiNum3 ����
	} while (aiNum1 == aiNum2 || aiNum1 == aiNum3 || aiNum2 == aiNum3); //��ġ�� ���ڰ� ���� �� ���� �ݺ�

	aiNum = aiNum1 * 100 + aiNum2 * 10 + aiNum3; //���ڸ� ���� aiNum ����


	//answer[] �迭�� aiNum1,aiNum2,aiNum3 ������� ����ֱ�
	answer[0] = aiNum1;
	answer[1] = aiNum2;
	answer[2] = aiNum3;
}; //aiNum�� �迭�� �����


void gameLoop() {

	for (int i = 0; i < 9; i++)
	{
		cin >> pNum; //�÷��̾� �Է°�
		pNum1 = pNum / 100; //�÷��̾� �Է°� 1��° �� ����
		pNum2 = pNum % 100 / 10; //�÷��̾� �Է°� 2��° �� ����
		pNum3 = pNum % 10; //�÷��̾� �Է°� 3��° �� ����

		//pNumArray[] �迭�� pNum1,pNum2,pNum3 ������� ����ֱ�
		pNumArray[0] = pNum1;
		pNumArray[1] = pNum2;
		pNumArray[2] = pNum3;


		int B = 0; //�� ī��Ʈ
		int S = 0; //��Ʈ����ũ ī��Ʈ

		//������ ������ ��
		if (aiNum == pNum) {
			cout << "GAME CLEAR\n";
			break;
		}

		//9�� ��� �������� ��
		if (i == 8) {
			cout << "GAME OVER\n";
			cout << "���� : " << aiNum << endl; //���� �����ֱ�
			break;
		}

		//������ aiNum�� �÷��̾� �Է°� pNum�� ��ġ���� �ʴ� ���
		if (aiNum != pNum) {

			//�迭 answer�� i��° ���ڸ� ���ʴ�� �ҷ����� ���� �ݺ���
			for (int i = 0; i < 3; i++) {

				//�迭 pnumArray�� i��° ���ڸ� ���ʴ�� �ҷ����� ���� �ݺ���
				for (int j = 0; j < 3; j++) {

					// �迭 answer�� �迭 pNumArray�� �������� ���� ���ڰ� ���� ���
					if (answer[i] == pNumArray[j]) {

						//�������� ���� ������ ������ ���� ���
						if (answer[i] == pNumArray[i]) {
							S++; // ��Ʈ����ũ ī��Ʈ ����
						}

						//�������� ���� ������ ������ �ٸ� ���
						if (answer[i] != pNumArray[i]) {
							B++; //�� ī��Ʈ ����
						}
					}
				}
			}

			//��Ʈ����ũ�� ���� ���
			if (B == 0 && S > 0) {
				cout << S << "��Ʈ����ũ" << endl;
			}

			//���� ���� ���
			if (B > 0 && S == 0) {
				cout << B << "��" << endl;
			}

			//���� �ְ� ��Ʈ����ũ�� ���� ���
			if (B > 0 && S > 0) {
				cout << S << "��Ʈ����ũ" << B << "��" << endl;
			}

			//��ġ�ϴ� ���ڰ� �ϳ��� ���� ���
			if (B == 0 && S == 0) {
				cout << "�ƿ�" << endl;
			}

		}
	}

}