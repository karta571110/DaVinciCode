#include <iostream>
#include <time.h>
#include <stdio.h>

using namespace std;

bool playflag=true;  //是否猜中

int ans;
int playerInput;
int maxRange=100;
int miniumRange=1;

int main()
{
	srand((unsigned)time(NULL));
	ans = rand() % 100 + 1;
	while (playflag)
	{
		cout << "請猜一個在" << miniumRange << "~" << maxRange << "之間的數字:";
		cin >> playerInput;
		if (playerInput > miniumRange&& playerInput < ans)
		{
			miniumRange = playerInput;
		}
		else if (playerInput > ans&& maxRange > playerInput)
		{
			maxRange = playerInput;
		}
		if (playerInput == ans)
		{
			playflag = false;
		}
	}
	cout << "你猜中了，答案是:" <<ans<< endl;
}


