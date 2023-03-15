#include <iostream>
#include <ctime>
using namespace std;

int aiNum; //정답이 되는 세자리 숫자 선언
int aiNum1, aiNum2, aiNum3;
int pNum; //플레이어가 입력하는 세자리 숫자 선언
int pNum1, pNum2, pNum3;

int answer[3];
int pNumArray[3];

void generateAnswer();
void gameLoop();

int main() {

	generateAnswer();

	cout << "숫자야구 시작!" << endl; //게임시작에 대한 안내 문구

	gameLoop();

	return 0;
}

void generateAnswer() {
	//랜덤 수 3개 생성
	do { //do반복문을 사용하는 이유는 조건에 aiNum1, aiNum2, aiNum3가 들어가는데 아직 정의 되지 않았기 때문
		srand((unsigned int)time(NULL)); //랜덤값 만들기
		aiNum1 = rand() % 10; //0~9 사이의 aiNum1 정의
		aiNum2 = rand() % 10; //0~9 사이의 aiNum2 정의
		aiNum3 = rand() % 10; //0~9 사이의 aiNum3 정의
	} while (aiNum1 == aiNum2 || aiNum1 == aiNum3 || aiNum2 == aiNum3); //겹치는 숫자가 없을 때 까지 반복

	aiNum = aiNum1 * 100 + aiNum2 * 10 + aiNum3; //세자리 숫자 aiNum 정의


	//answer[] 배열에 aiNum1,aiNum2,aiNum3 순서대로 집어넣기
	answer[0] = aiNum1;
	answer[1] = aiNum2;
	answer[2] = aiNum3;
}; //aiNum을 배열로 만들기


void gameLoop() {

	for (int i = 0; i < 9; i++)
	{
		cin >> pNum; //플레이어 입력값
		pNum1 = pNum / 100; //플레이어 입력값 1번째 수 정의
		pNum2 = pNum % 100 / 10; //플레이어 입력값 2번째 수 정의
		pNum3 = pNum % 10; //플레이어 입력값 3번째 수 정의

		//pNumArray[] 배열에 pNum1,pNum2,pNum3 순서대로 집어넣기
		pNumArray[0] = pNum1;
		pNumArray[1] = pNum2;
		pNumArray[2] = pNum3;


		int B = 0; //볼 카운트
		int S = 0; //스트라이크 카운트

		//정답을 맞췄을 때
		if (aiNum == pNum) {
			cout << "GAME CLEAR\n";
			break;
		}

		//9번 모두 실패했을 때
		if (i == 8) {
			cout << "GAME OVER\n";
			cout << "정답 : " << aiNum << endl; //정답 보여주기
			break;
		}

		//랜덤값 aiNum과 플레이어 입력값 pNum이 일치하지 않는 경우
		if (aiNum != pNum) {

			//배열 answer의 i번째 숫자를 차례대로 불러오기 위한 반복문
			for (int i = 0; i < 3; i++) {

				//배열 pnumArray의 i번째 숫자를 차례대로 불러오기 위한 반복문
				for (int j = 0; j < 3; j++) {

					// 배열 answer과 배열 pNumArray에 공통으로 들어가는 숫자가 있을 경우
					if (answer[i] == pNumArray[j]) {

						//공통으로 들어가는 숫자의 순서가 같을 경우
						if (answer[i] == pNumArray[i]) {
							S++; // 스트라이크 카운트 증가
						}

						//공통으로 들어가는 숫자의 순서가 다를 경우
						if (answer[i] != pNumArray[i]) {
							B++; //볼 카운트 증가
						}
					}
				}
			}

			//스트라이크만 있을 경우
			if (B == 0 && S > 0) {
				cout << S << "스트라이크" << endl;
			}

			//볼만 있을 경우
			if (B > 0 && S == 0) {
				cout << B << "볼" << endl;
			}

			//볼도 있고 스트라이크도 있을 경우
			if (B > 0 && S > 0) {
				cout << S << "스트라이크" << B << "볼" << endl;
			}

			//일치하는 숫자가 하나도 없을 경우
			if (B == 0 && S == 0) {
				cout << "아웃" << endl;
			}

		}
	}

}