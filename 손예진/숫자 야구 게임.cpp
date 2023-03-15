// 숫자 야구 게임.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
    int random[3], ball, strike, a[3], i, j, temp, out;
    int count = 1;
    srand((unsigned)time(NULL));

    for (i = 0; i < 3; i++)
    {
        temp = rand() % 10;
        random[i] = temp;
        for (j = 0; j < i; j++)
        {
            if (temp == random[j] && i != j)
            {
                i--;
            }
        }
    }
    cout << random[0] << " " << random[1] << " " << random[2] << endl;
    while (1)
    {
        cout << count << "회 숫자야구" << endl;
        while (1)
        {
            cout << "3개의 숫자를 0~9 사이로 입력하세요 : " << endl;
            cin >> a[0] >> a[1] >> a[2];

            if (a[0] < 0 || a[0] > 9 || a[1] < 0 || a[1] > 9 || a[2] < 0 || a[2] > 9)
            {
                cout << "입력한 숫자가 너무 크거나 작습니다. 0~9 사이를 입력하세요." << endl;
                continue;
            }
            else if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2])
            {
                cout << "중복된 숫자를 입력하시면 안됩니다." << endl;
                continue;
            }
            break;
        }
                
            ball = 0;
            strike = 0;
            
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    if (random[i] == a[j])
                    {
                        if (i == j)
                        {
                            strike++;
                        }
                        else
                        {
                            ball++;
                        }
                    }
                }
                out = 3 - strike - ball;
            }
            cout << "스트라이크 : " << strike << ", 볼 : " << ball << ", 아웃 : " << out << endl;

            if (strike == 3)
            {
                cout << "승리!";
                break;
            }
            else if (count == 9)
            {
                cout << "패배! 정답 : " << random[0] << " " << random[1] << " " << random[2];
                break;
            }
            count++;
        }
    return 0;
}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
