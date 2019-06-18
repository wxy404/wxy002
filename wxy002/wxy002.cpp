// wxy002.cpp : アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <random>
#include <string>


int main()
{
	std::random_device rnd;//乱数

	std::string ur_name[9] = { "松浦果南UR","小原鞠莉UR","黒澤ダイヤUR","高海千歌UR","桜内梨子UR","渡辺曜UR","国木田花丸UR","津島善子UR","黒澤ルビィUR" };
	std::string ssr1_name[9] = { "松浦果南SSR+","小原鞠莉SSR+","黒澤ダイヤSSR+","高海千歌SSR+","桜内梨子SSR+","渡辺曜SSR+","国木田花丸SSR+","津島善子SSR+","黒澤ルビィSSR+" };
	std::string ssr_name[9] = { "松浦果南SSR","小原鞠莉SSR","黒澤ダイヤSSR","高海千歌SSR","桜内梨子SSR","渡辺曜SSR","国木田花丸SSR","津島善子SSR","黒澤ルビィSSR" };
	std::string sr1_name[9] = { "松浦果南SR+","小原鞠莉SR+","黒澤ダイヤSR+","高海千歌SR+","桜内梨子SR+","渡辺曜SR+","国木田花丸SR+","津島善子SR+","黒澤ルビィSR+" };
	std::string sr_name[9] = { "松浦果南SR","小原鞠莉SR","黒澤ダイヤSR","高海千歌SR","桜内梨子SR","渡辺曜SR","国木田花丸SR","津島善子SR","黒澤ルビィSR" };
	std::string r1_name[9] = { "松浦果南R+","小原鞠莉R+","黒澤ダイヤR+","高海千歌R+","桜内梨子R+","渡辺曜R+","国木田花丸R+","津島善子R+","黒澤ルビィR+" };
	std::string r_name[9] = { "松浦果南R","小原鞠莉R","黒澤ダイヤR","高海千歌R","桜内梨子R","渡辺曜R","国木田花丸R","津島善子R","黒澤ルビィR" };
		
	int n = 0;
	bool flag = true;
		do
		{
			printf("%d回ガチャだ！\n", n + 1);
			for (int i = 0; i < 10; i++)
			{
				int num = (rnd() % 1000) + 1;
				int name_num = rand() % 9;
				if (i == 9)
				{
					num = (rnd() % 40) + 1;
				}
				if (num <= 10)
				{
					printf("%s\n", ur_name[name_num].c_str());
					flag = false;
				}
				else if (num <= 10 + 30)
				{
					printf("%s\n", ssr1_name[name_num].c_str());
				}
				else if (num <= 10 + 30 + 50)
				{
					printf("%s\n", ssr_name[name_num].c_str());
				}
				else if (num <= 10 + 30 + 50 + 100)
				{
					printf("%s\n", sr1_name[name_num].c_str());
				}
				else if (num <= 10 + 30 + 50 + 100 + 150)
				{
					printf("%s\n", sr_name[name_num].c_str());
				}
				else if (num <= 10 + 30 + 50 + 100 + 150 + 200)
				{
					printf("%s\n", r1_name[name_num].c_str());
				}
				else
				{
					printf("%s\n", r_name[name_num].c_str());
				}
				
			}
			printf("\n");
			n++;
		} while (flag);
		
	return 0;
}

