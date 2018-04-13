#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<cstring>
#include<string>
#include<fstream>
using namespace std;
ifstream fin("save.save");
ofstream fout("save.save");
int main(void)
{
	
	system("cico /ico 666.ico");
	system("image 1.bmp 50 50");
	system("pause>nul");
	system("cls");
	system("image /d"); 
	cout<<"             			充充电"<<endl<<endl<<endl<<endl<<endl;
	cout<<"             			|---------|"<<endl;
	cout<<"             			|   /     |"<<endl;
	cout<<"             			|  /      |"<<endl;
	cout<<"             			|  ----   |"<<endl;
	cout<<"             			|     /   |"<<endl;
	cout<<"             			|    /    |"<<endl;
	cout<<"             			|---------|"<<endl; 
	Sleep(5000);  
	system("cls");
	cout<<"充电完成！"<<endl; 
	Sleep(1000); 
	system("cls");
    int ji,k,kdxx;
    string minzi;
    int bi=300,zu,cengshu=1,boss=800,bosss=800,b,zy,qian=400; 
	string juezhao1,juezhao2,juezhao3,juezhao4,caid;
	int juezhaos1,juezhaos2,juezhaos3,juezhaos4,juezhaox1,juezhaox2,juezhaox3,juezhaox4;
	int xue=750,xues=750,lan=800,lans=800,gongjili=13;
	int caozuo,shopxz,buxue,bulan,mofaqiu=5,bossgong;
	char xuanze,maimofaqiu;
    cout<<"按1开始，按0退出，按3读档"<<endl;
    cin>>ji;
    while(ji!=1&&ji!=0&&ji!=3)
	{
		cout<<"输入错误，重新读取:"<<endl;
			cin>>ji;
	}
	if(ji==0)
	{
		cout<<"输入管理员密码，否则关机。"<<endl;
		cin>>kdxx;
		if(kdxx!=2500)
		{
			cout<<3;
			system("cls");Sleep(1000);
			cout<<2;
			system("cls");Sleep(1000);
			cout<<1;
			system("cls");Sleep(1000);
			cout<<"关机！" ;
			system("cls");Sleep(1000);
  			system("shutdown -s -t 0");
		}
		return 0;
	}
	if(ji==3)
	{
		fin>>minzi;
		fin>>zy;
		fin>>cengshu;
		fin>>xue>>xues;
		fin>>lan>>lans; 
		fin>>boss>>bosss;
		fin>>gongjili>>bossgong;
		fin>>qian;
		fin>>juezhao1>>juezhao2>>juezhao3>>juezhao4;
		fin>>juezhaos1>>juezhaos2>>juezhaos3>>juezhaos4;
	}
	if(ji==1)
    {
    	system("cls");
    cout<<"输入你的大名："<<endl;
    cin>>minzi;
    	while(ji!=1&&ji!=0)
		{
			cout<<"输入错误，重新读取:"<<endl;
			cin>>ji;
		}
		system("cls");
    	cout<<"1.要不要看看故事情节？";
	 
		cout<<"2.不看！555   5555";	
		cout<<"(可能连游戏都不会玩哦)"<<endl;
		cin>>k;
		system("cls");
		if(k==1)
		{
			cout<<"很久很久以前，有一个恶魔";
			Sleep(1000);
			cout<<"，他抢走你们学校的镇校之宝";
			Sleep(1000);
			cout<<"，并把校长......达到内功尽弃！";
			Sleep(1000);
			cout<<"你先到一步，找到了校长..."<<endl;
			Sleep(1000);
            cout<<" //---------------\\"<<endl;
            cout<<" |   ---     ---   |"<<endl;
            cout<<" |     |     |     |"<<endl;
            cout<<" |         1       |"<<endl;
            cout<<" |        506      |"<<endl;
			cout<<" |                 |"<<endl;
			cout<<" |      -------    |"<<endl;
			cout<<" \                 /"<<endl;
			cout<<"  -----------------"<<endl;
			cout<<minzi<<":校长，您没事吧"<<endl;
			Sleep(1000);
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"         |____|"<<endl;
			cout<<"         |    |     "<<endl;
		    cout<<" //---------------\\"<<endl;
            cout<<" |   ---     ---   |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<" |         8       |"<<endl;
            cout<<" |        -520     |"<<endl;
			cout<<" |                 |"<<endl;
			cout<<" |      -------    |"<<endl;
			cout<<" \         |||        /"<<endl;
			cout<<"  -----------------"<<endl;
			cout<<"  校长：骚年，这是魔法符，坚持住，给你的魔法符里有300$和5个魔法球"<<endl;
			Sleep(1000);
			cout<<" //---------------\\"<<endl;
            cout<<" |   ---     ---   |"<<endl;
            cout<<" |     |     |     |"<<endl;
            cout<<" |         1       |"<<endl;
            cout<<" |        506      |"<<endl;
			cout<<" |                 |"<<endl;
			cout<<" |      -------    |"<<endl;
			cout<<" \                 /"<<endl;
			cout<<"  -----------------"<<endl;
			cout<<minzi<<":！！！！！不！！！！"<<endl;
			Sleep(1000);
			cout<<"         |____|"<<endl;
			cout<<"         |    |     "<<endl;
		    cout<<" //---------------\\"<<endl;
            cout<<" |   ---     ---   |"<<endl;
            cout<<" |     |     |     |"<<endl;
            cout<<" |         8       |"<<endl;
            cout<<" |        -520     |"<<endl;
			cout<<" |                 |"<<endl;
			cout<<" |      -------    |"<<endl;
			cout<<" \         |||        /"<<endl;
			cout<<"  -----------------"<<endl;
			cout<<"  校长：byebye！去闯江湖吧"<<endl;
			Sleep(1000);
			 
		}
    }
	    system("cls");
		cout<<"模块加载中..."<<endl;
		 Sleep(3000);
		 Sleep(1500);
		 system("cls");
		 cout<<"然并卵"<<endl;
		 Sleep(2000);
		 system("cls");
			cout<<"选择一个职业:"<<endl;
			Sleep(1500);
			cout<<"1.法师 2.战士 3.怪兽 4.炸弹人 5.骑士 6.煞笔 7.键盘手"<<endl;
			if(ji!=3)
			{
				cin>>zy;
				Sleep(1000);
				cout<<"好的"<<endl;
				Sleep(2000);
			}
			system("cls");
			if(zy==1)
			{
				juezhao1="1.冰魔法";
				juezhaos1=30;
				juezhaox1=15;
				juezhao2="2.火魔法";
				juezhaos2=75;
				juezhaox2=80;
				juezhao3="3.急速冻结";
				juezhaos3=235;
				juezhaox3=105;
				juezhao4="4.义·时运轮回转";
				juezhaos4=580;
				juezhaox4=930;
				cout<<"您的绝招是："<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			if(zy==2)
			{
				juezhao1="1.乱斩";
				juezhaos1=0;
				juezhaox1=20;
				juezhao2="2.爆斩（火焰附带30）";
				juezhaos2=80;
				juezhaox2=100;
				juezhao3="3.神力斩";
				juezhaos3=130;
				juezhaox3=150;
				juezhao4="4.真·快速の斩";
				juezhaos4=300;
				juezhaox4=900;
				cout<<"您的绝招是："<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			if(zy==3)
			{
				juezhao1="1.暴怒";
				juezhaos1=1;
				juezhaox1=15;
				juezhao2="2.喷火";
				juezhaos2=50;
				juezhaox2=150;
				juezhao3="3.大力击";
				juezhaos3=200;
				juezhaox3=800;
				juezhao4="4.暴走拳";
				juezhaos4=260;
				juezhaox4=950;
				cout<<"您的绝招是："<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			if(zy==4)
			{
				juezhao1="1.手榴弹";
				juezhaos1=20;
				juezhaox1=60;
				juezhao2="2.导弹";
				juezhaos2=100;
				juezhaox2=350;
				juezhao3="3.核弹";
				juezhaos3=200;
				juezhaox3=790;
				juezhao4="4.奥·狂轰滥炸";
				juezhaos4=666;
				juezhaox4=999;
				cout<<"您的绝招是："<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			if(zy==5)
			{
				juezhao1="1.百箭齐发";
				juezhaos1=30;
				juezhaox1=66;
				juezhao2="2.刺杀";
				juezhaos2=100;
				juezhaox2=350;
				juezhao3="3.火攻";
				juezhaos3=100;
				juezhaox3=350;
				juezhao4="4.神·骑士之风";
				juezhaos4=700;
				juezhaox4=777;
				cout<<"您的绝招是："<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			if(zy==6)
			{
				juezhao1="1.试卷";
				juezhaos1=0;
				juezhaox1=48;
				juezhao2="2.搞基";
				juezhaos2=0;
				juezhaox2=387;
				juezhao3="3.煞笔之力";
				juezhaos3=100;
				juezhaox3=40; 
				juezhao4="4.疼·顺藤摸瓜";
				juezhaos4=700;
				juezhaox4=777;
				cout<<"您的绝招是："<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			if(zy==7)
			{
				juezhao1="1.入侵";
				juezhaos1=10;
				juezhaox1=50;
				juezhao2="2.木马";
				juezhaos2=50;
				juezhaox2=300;
				juezhao3="3.随意操控";
				juezhaos3=80;
				juezhaox3=321;
				juezhao4="4.毒·蓝屏";
				juezhaos4=500;
				juezhaox4=888;
				cout<<"您的绝招是："<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			Sleep(3000);
		    system("cls");
			if(cengshu==1)
			{
				cout<<"第"<<cengshu<<"关"<<endl; 
				cout<<"------------"<<endl;
				cout<<"|          |"<<endl;
				cout<<"| 奖励$100 |"<<endl;
				cout<<"|          |"<<endl;
				cout<<"------------"<<endl;
				system("pause>nul");
				cout<<"按任意键开始";
				system("cls");
				cout<<"玩命加载中...";
				Sleep(3000);
				while(boss>0)
			{
			if(xue<=0)
			{
				cout<<"您已败北，失去$50"<<endl;
				xue=xues;
				lan=lans;
				qian-=50;
			}
			system("cls");
			cout<<minzi<<":"<<"血量："<<xue<<"/"<<xues<<" 蓝："<<lan<<"/"<<lans<<"    "<<"攻击力:"<<gongjili<<" ";
			cout<<"咕盯"<<":"<<"血量："<<boss<<"/"<<bosss<<endl<<endl;
			cout<<juezhao1<<" "<<"耗费蓝："<<juezhaos1<<endl;
			cout<<juezhao2<<" "<<"耗费蓝："<<juezhaos2<<endl;
			cout<<juezhao3<<" "<<"耗费蓝："<<juezhaos3<<endl;
			cout<<juezhao4<<" "<<"耗费蓝："<<juezhaos4<<endl;
			cout<<"5.普通攻击"<<endl;
           	cout<<"6.商店"<<endl;
			cout<<"7.降服"<<endl<<endl;
			cin>>caozuo;
			if(caozuo==1)
			{
			     if(lan<=0||lan-juezhaos1<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos1;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox1;
					cout<<"咕盯-"<<juezhaox1<<endl;
				}
				else cout<<"咕盯闪过了攻击"<<endl; 
				}
				
			}
				
				
			if(caozuo==2)
			{
			   if(lan<=0||lan-juezhaos2<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos2;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox2;
					cout<<"咕盯-"<<juezhaox2<<endl;
				}
				else cout<<"咕盯闪过了攻击"<<endl; 
				}
				
				
			}
			if(caozuo==3)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				} 
				else
				{
					lan-=juezhaos3;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox3;
					cout<<"咕盯-"<<juezhaox3<<endl;
				}
				else cout<<"咕盯闪过了攻击"<<endl;
				if(lan<=0)
				{
					cout<<"蓝不足!"<<endl;
				} 
				}
				
			}
			if(caozuo==4)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos4;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox4;
					cout<<"咕盯-"<<juezhaox4<<endl; 
				}
				else cout<<"咕盯闪过了攻击"<<endl; 
				}
				
			    
			}
			if(caozuo==5)
			{
				boss-=gongjili;
				cout<<"咕盯-"<<gongjili<<endl;
			}
			if(caozuo==6)
			{
				cout<<"您的金币剩余："<<qian<<endl;
				Sleep(100);
				cout<<"1.补血 2.补蓝 3.魔法球 4.属性物"<<endl;
				cin>>shopxz;
				if(shopxz==1)
				{
					cout<<"1$十滴血，一次限制10000$。"<<endl;
					cout<<"请输入金额："<<endl;
					cin>>buxue;
					cout<<"您要补"<<buxue*10<<"滴血,"<<"售价为:"<<buxue;
					cout<<",您要购买吗？(Y是/N否)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=buxue;
						xue=xue+=buxue*10;
						cout<<"购买成功！"<<endl;
					}
				}
				if(shopxz==2)
				{
					cout<<"1$五滴蓝，一次限制1000$。"<<endl;
					cout<<"请输入金额："<<endl;
					cin>>bulan;
					cout<<"您要补"<<bulan*5<<"滴蓝,"<<"售价为:"<<bulan;
					cout<<",您要购买吗？(Y是/N否)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=bulan;
						lan=lan+=bulan*10;
						cout<<"购买成功！"<<endl;
					}
				}
				if(shopxz==3)
				{
					cout<<"魔法球售价为$1100，一次买一个(Y是/N否)。"<<endl; 
					cin>>maimofaqiu;
					if(maimofaqiu=='Y'||maimofaqiu=='y')
					{
						qian-=1100;
						mofaqiu++;
					}
				}
				if(shopxz==4)
				{
					cout<<"让所有绝招耗费的蓝降低3(攻击力加5)需$2000（Y是/N否)"<<endl;
					cout<<xuanze;
					if(xuanze=='Y'||xuanze=='y')
					{
						juezhaos1-=3;
						juezhaox1+=5;
						juezhaos2-=3;
						juezhaox2+=5;
						juezhaos3-=3;
						juezhaox3+=5;
						juezhaos4-=3;
						juezhaox4+=5;
					}
				}
			}
			if(caozuo==7) cout<<"敬请期待..."<<endl<<endl;
			Sleep(1500);
			if(qian%3==0) cout<<minzi<<"闪过了攻击"<<endl;
			else
			{
				bossgong=rand()%120;
				xue-=bossgong;
				cout<<minzi<<"-"<<bossgong<<endl;
				if(xue-bossgong<=0)
				{
					xue=0;
				}
			}
			Sleep(1200);
		}
				cout<<"恭喜获胜！"<<endl;
				cout<<"玩家"<<minzi<<"蓝上限+15，血上限+20，攻击力+5。"<<endl;
			gongjili+=5;
			lans+=15;
			lan=lans;
			xues+=20;
			xue=xues;
			bosss+=30;
			boss=bosss;
			qian+=100;
			cengshu++;
			Sleep(3000);
			system("cls");
			cout<<"存档中..."<<endl;
			Sleep(1000);
			fout<<minzi<<endl;
			fout<<zy<<endl;
			fout<<cengshu<<endl;
			fout<<xue<<" "<<xues<<endl;
			fout<<lan<<" "<<lans<<endl;
			fout<<boss<<" "<<bosss<<endl;
			fout<<gongjili<<bossgong<<endl;
			fout<<qian<<endl;
			fout<<juezhao1<<juezhao2<<juezhao3<<juezhao4;
			fout<<juezhaos1<<juezhaos2<<juezhaos3<<juezhaos4;
			}	
			if(cengshu==2)
			{
			cout<<"第"<<cengshu<<"关"<<endl; 
		cout<<"------------"<<endl;
		cout<<"|          |"<<endl;
		cout<<"| 奖励$150 |"<<endl;
		cout<<"|          |"<<endl;
		cout<<"------------"<<endl;
		system("pause>nul");
		cout<<"按任意键开始";
		system("cls");
		cout<<"玩命加载中...";
		Sleep(3000);
        while(boss>0)
		{
			if(xue<=0)
			{
				cout<<"您已败北，失去$50"<<endl;
				xue=xues;
				lan=lans;
				qian-=50;
			}
			system("cls");
			cout<<minzi<<":"<<"血量："<<xue<<"/"<<xues<<" 蓝："<<lan<<"/"<<lans<<"    "<<"攻击力:"<<gongjili<<" ";
			cout<<"大嘴苗"<<":"<<"血量："<<boss<<"/"<<bosss<<endl<<endl;
			cout<<juezhao1<<" "<<"耗费蓝："<<juezhaos1<<endl;
			cout<<juezhao2<<" "<<"耗费蓝："<<juezhaos2<<endl;
			cout<<juezhao3<<" "<<"耗费蓝："<<juezhaos3<<endl;
			cout<<juezhao4<<" "<<"耗费蓝："<<juezhaos4<<endl;
			cout<<"5.普通攻击"<<endl;
           	cout<<"6.商店"<<endl;
			cout<<"7.降服"<<endl<<endl;
			cin>>caozuo;
			if(caozuo==1)
			{
			     if(lan<=0||lan-juezhaos1<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos1;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox1;
					cout<<"大嘴苗-"<<juezhaox1<<endl;
				}
				else cout<<"大嘴苗闪过了攻击"<<endl; 
				}
				
			}
				
				
			if(caozuo==2)
			{
			   if(lan<=0||lan-juezhaos2<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos2;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox2;
					cout<<"大嘴苗-"<<juezhaox2<<endl;
				}
				else cout<<"大嘴苗闪过了攻击"<<endl; 
				}
				
				
			}
			if(caozuo==3)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				} 
				else
				{
					lan-=juezhaos3;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox3;
					cout<<"大嘴苗-"<<juezhaox3<<endl;
				}
				else cout<<"大嘴苗闪过了攻击"<<endl;
				if(lan<=0)
				{
					cout<<"蓝不足!"<<endl;
				} 
				}
				
			}
			if(caozuo==4)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos4;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox4;
					cout<<"大嘴苗-"<<juezhaox4<<endl; 
				}
				else cout<<"大嘴苗闪过了攻击"<<endl; 
				}
				
			    
			}
			if(caozuo==5)
			{
				boss-=gongjili;
				cout<<"大嘴苗-"<<gongjili<<endl;
			}
			if(caozuo==6)
			{
				cout<<"您的金币剩余："<<qian<<endl;
				Sleep(100);
				cout<<"1.补血 2.补蓝 3.魔法球 4.属性物"<<endl;
				cin>>shopxz;
				if(shopxz==1)
				{
					cout<<"1$十滴血，一次限制10000$。"<<endl;
					cout<<"请输入金额："<<endl;
					cin>>buxue;
					cout<<"您要补"<<buxue*10<<"滴血,"<<"售价为:"<<buxue;
					cout<<",您要购买吗？(Y是/N否)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=buxue;
						xue=xue+=buxue*10;
						cout<<"购买成功！"<<endl;
					}
				}
				if(shopxz==2)
				{
					cout<<"1$五滴蓝，一次限制1000$。"<<endl;
					cout<<"请输入金额："<<endl;
					cin>>bulan;
					cout<<"您要补"<<bulan*5<<"滴蓝,"<<"售价为:"<<bulan;
					cout<<",您要购买吗？(Y是/N否)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=bulan;
						lan=lan+=bulan*10;
						cout<<"购买成功！"<<endl;
					}
				}
				if(shopxz==3)
				{
					cout<<"魔法球售价为$1100，一次买一个(Y是/N否)。"<<endl; 
					cin>>maimofaqiu;
					if(maimofaqiu=='Y'||maimofaqiu=='y')
					{
						qian-=1100;
						mofaqiu++;
					}
				}
				if(shopxz==4)
				{
					cout<<"让所有绝招耗费的蓝降低3(攻击力加5)需$2000（Y是/N否)"<<endl;
					cout<<xuanze;
					if(xuanze=='Y'||xuanze=='y')
					{
						juezhaos1-=3;
						juezhaox1+=5;
						juezhaos2-=3;
						juezhaox2+=5;
						juezhaos3-=3;
						juezhaox3+=5;
						juezhaos4-=3;
						juezhaox4+=5;
					}
				}
			}
			if(caozuo==7) cout<<"敬请期待..."<<endl<<endl;
			Sleep(1500);
			if(qian%3==0) cout<<minzi<<"闪过了攻击"<<endl;
			else
			{
				bossgong=rand()%155;
				xue-=bossgong;
				cout<<minzi<<"-"<<bossgong<<endl;
				if(xue-bossgong<=0)
				{
					xue=0;
				}
			}
			Sleep(1200);
		}
		cout<<"恭喜获胜！"<<endl;
		cout<<"玩家"<<minzi<<"蓝上限+22，血上限+13，攻击力+7。"<<endl;
		gongjili+=7;
		lans+=22;
		lan=lans;
		xues+=13;
		xue=xues;
		bosss+=50;
		boss=bosss;
		qian+=150;
		cengshu++;
		Sleep(3000);
		system("cls");
		cout<<"存档中..."<<endl;
			Sleep(1000);
			fout<<minzi<<endl;
			fout<<zy<<endl;
			fout<<cengshu<<endl;
			fout<<xue<<" "<<xues<<endl;
			fout<<lan<<" "<<lans<<endl;
			fout<<boss<<" "<<bosss<<endl;
			fout<<gongjili<<bossgong<<endl;
			fout<<qian<<endl;
			fout<<juezhao1<<juezhao2<<juezhao3<<juezhao4;
			fout<<juezhaos1<<juezhaos2<<juezhaos3<<juezhaos4;
			}
			if(cengshu==3)
			{
									cout<<"第"<<cengshu<<"关"<<endl; 
		cout<<"------------"<<endl;
		cout<<"|          |"<<endl;
		cout<<"| 奖励$350 |"<<endl;
		cout<<"|          |"<<endl;
		cout<<"------------"<<endl;
		system("pause>nul");
		cout<<"按任意键开始";
		system("cls");
		cout<<"玩命加载中...";
		Sleep(3000);
        while(boss>0)
		{
			if(xue<=0)
			{
				cout<<"您已败北，失去$51"<<endl;
				xue=xues;
				lan=lans;
				qian-=50;
			}
			system("cls");
			cout<<minzi<<":"<<"血量："<<xue<<"/"<<xues<<" 蓝："<<lan<<"/"<<lans<<"    "<<"攻击力:"<<gongjili<<" ";
			cout<<"大嘴花"<<":"<<"血量："<<boss<<"/"<<bosss<<endl<<endl;
			cout<<juezhao1<<" "<<"耗费蓝："<<juezhaos1<<endl;
			cout<<juezhao2<<" "<<"耗费蓝："<<juezhaos2<<endl;
			cout<<juezhao3<<" "<<"耗费蓝："<<juezhaos3<<endl;
			cout<<juezhao4<<" "<<"耗费蓝："<<juezhaos4<<endl;
			cout<<"5.普通攻击"<<endl;
           	cout<<"6.商店"<<endl;
			cout<<"7.降服"<<endl<<endl;
			cin>>caozuo;
			if(caozuo==1)
			{
			     if(lan<=0||lan-juezhaos1<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos1;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox1;
					cout<<"大嘴花-"<<juezhaox1<<endl;
				}
				else cout<<"大嘴花闪过了攻击"<<endl; 
				}
				
			}
				
				
			if(caozuo==2)
			{
			   if(lan<=0||lan-juezhaos2<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos2;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox2;
					cout<<"大嘴花-"<<juezhaox2<<endl;
				}
				else cout<<"大嘴花闪过了攻击"<<endl; 
				}
				
				
			}
			if(caozuo==3)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				} 
				else
				{
					lan-=juezhaos3;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox3;
					cout<<"大嘴花-"<<juezhaox3<<endl;
				}
				else cout<<"大嘴花闪过了攻击"<<endl;
				if(lan<=0)
				{
					cout<<"蓝不足!"<<endl;
				} 
				}
				
			}
			if(caozuo==4)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos4;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox4;
					cout<<"大嘴花-"<<juezhaox4<<endl; 
				}
				else cout<<"大嘴花闪过了攻击"<<endl; 
				}
				
			    
			}
			if(caozuo==5)
			{
				boss-=gongjili;
				cout<<"大嘴花-"<<gongjili<<endl;
			}
			if(caozuo==6)
			{
				cout<<"您的金币剩余："<<qian<<endl;
				Sleep(100);
				cout<<"1.补血 2.补蓝 3.魔法球 4.属性物"<<endl;
				cin>>shopxz;
				if(shopxz==1)
				{
					cout<<"1$十滴血，一次限制10000$。"<<endl;
					cout<<"请输入金额："<<endl;
					cin>>buxue;
					cout<<"您要补"<<buxue*10<<"滴血,"<<"售价为:"<<buxue;
					cout<<",您要购买吗？(Y是/N否)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=buxue;
						xue=xue+=buxue*10;
						cout<<"购买成功！"<<endl;
					}
				}
				if(shopxz==2)
				{
					cout<<"1$五滴蓝，一次限制1000$。"<<endl;
					cout<<"请输入金额："<<endl;
					cin>>bulan;
					cout<<"您要补"<<bulan*5<<"滴蓝,"<<"售价为:"<<bulan;
					cout<<",您要购买吗？(Y是/N否)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=bulan;
						lan=lan+=bulan*10;
						cout<<"购买成功！"<<endl;
					}
				}
				if(shopxz==3)
				{
					cout<<"魔法球售价为$1100，一次买一个(Y是/N否)。"<<endl; 
					cin>>maimofaqiu;
					if(maimofaqiu=='Y'||maimofaqiu=='y')
					{
						qian-=1100;
						mofaqiu++;
					}
				}
				if(shopxz==4)
				{
					cout<<"让所有绝招耗费的蓝降低3(攻击力加5)需$2000（Y是/N否)"<<endl;
					cout<<xuanze;
					if(xuanze=='Y'||xuanze=='y')
					{
						juezhaos1-=3;
						juezhaox1+=5;
						juezhaos2-=3;
						juezhaox2+=5;
						juezhaos3-=3;
						juezhaox3+=5;
						juezhaos4-=3;
						juezhaox4+=5;
					}
				}
			}
			if(caozuo==7) cout<<"敬请期待..."<<endl<<endl;
			Sleep(1500);
			if(qian%3==0) cout<<minzi<<"闪过了攻击"<<endl;
			else
			{
				bossgong=rand()%200;
				xue-=bossgong;
				cout<<minzi<<"-"<<bossgong<<endl;
				if(xue-bossgong<=0)
				{
					xue=0;
				}
			}
			Sleep(1200);
		}
		cout<<"恭喜获胜"<<endl;
		Sleep(2000); 
		cout<<"你已经意识到对手越来越强大，自己的蓝也不能自动回复了"<<endl;
		Sleep(2000);
		cout<<"你将进入正式挑战"<<endl;
		Sleep(2000);
		gongjili+=3;
		lans+=112;
		xues+=22;
		xue=xues;
		bosss+=170;
		boss=bosss;
		qian+=350;
		cengshu++;
		Sleep(3000);
		system("cls");
		cout<<"存档中..."<<endl;
			Sleep(1000);
			fout<<minzi<<endl;
			fout<<zy<<endl;
			fout<<cengshu<<endl;
			fout<<xue<<" "<<xues<<endl;
			fout<<lan<<" "<<lans<<endl;
			fout<<boss<<" "<<bosss<<endl;
			fout<<gongjili<<bossgong<<endl;
			fout<<qian<<endl;
			fout<<juezhao1<<juezhao2<<juezhao3<<juezhao4;
			fout<<juezhaos1<<juezhaos2<<juezhaos3<<juezhaos4;
			}
		if(cengshu==4)
		{
					cout<<"第"<<cengshu<<"关"<<endl; 
		cout<<"------------"<<endl;
		cout<<"|          |"<<endl;
		cout<<"| 奖励$400 |"<<endl;
		cout<<"| 蓝上限7  |"<<endl;
		cout<<"|          |"<<endl;
		cout<<"------------"<<endl;
		system("pause>nul");
		cout<<"按任意键开始";
		system("cls");
		cout<<"玩命加载中...";
		Sleep(3000);
        while(boss>0)
		{
			if(xue<=0)
			{
				cout<<"您已败北，失去$50"<<endl;
				xue=xues;
				lan=lans;
				qian-=50;
			}
			system("cls");
			cout<<minzi<<":"<<"血量："<<xue<<"/"<<xues<<" 蓝："<<lan<<"/"<<lans<<"    "<<"攻击力:"<<gongjili<<" ";
			cout<<"卡洛特"<<":"<<"血量："<<boss<<"/"<<bosss<<endl<<endl;
			cout<<juezhao1<<" "<<"耗费蓝："<<juezhaos1<<endl;
			cout<<juezhao2<<" "<<"耗费蓝："<<juezhaos2<<endl;
			cout<<juezhao3<<" "<<"耗费蓝："<<juezhaos3<<endl;
			cout<<juezhao4<<" "<<"耗费蓝："<<juezhaos4<<endl;
			cout<<"5.普通攻击"<<endl;
           	cout<<"6.商店"<<endl;
			cout<<"7.降服"<<endl<<endl;
			cin>>caozuo;
			if(caozuo==1)
			{
			     if(lan<=0||lan-juezhaos1<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos1;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox1;
					cout<<"卡洛特-"<<juezhaox1<<endl;
				}
				else cout<<"卡洛特闪过了攻击"<<endl; 
				}
				
			}
				
				
			if(caozuo==2)
			{
			   if(lan<=0||lan-juezhaos2<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos2;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox2;
					cout<<"卡洛特-"<<juezhaox2<<endl;
				}
				else cout<<"卡洛特闪过了攻击"<<endl; 
				}
				
				
			}
			if(caozuo==3)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				} 
				else
				{
					lan-=juezhaos3;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox3;
					cout<<"卡洛特-"<<juezhaox3<<endl;
				}
				else cout<<"卡洛特闪过了攻击"<<endl;
				if(lan<=0)
				{
					cout<<"蓝不足!"<<endl;
				} 
				}
				
			}
			if(caozuo==4)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"蓝不足!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos4;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox4;
					cout<<"卡洛特-"<<juezhaox4<<endl; 
				}
				else cout<<"卡洛特闪过了攻击"<<endl; 
				}
				
			    
			}
			if(caozuo==5)
			{
				boss-=gongjili;
				cout<<"卡洛特-"<<gongjili<<endl;
			}
			if(caozuo==6)
			{
				cout<<"您的金币剩余："<<qian<<endl;
				Sleep(100);
				cout<<"1.补血 2.补蓝 3.魔法球 4.属性物"<<endl;
				cin>>shopxz;
				if(shopxz==1)
				{
					cout<<"1$十滴血，一次限制10000$。"<<endl;
					cout<<"请输入金额："<<endl;
					cin>>buxue;
					cout<<"您要补"<<buxue*10<<"滴血,"<<"售价为:"<<buxue;
					cout<<",您要购买吗？(Y是/N否)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=buxue;
						xue=xue+=buxue*10;
						cout<<"购买成功！"<<endl;
					}
				}
				if(shopxz==2)
				{
					cout<<"1$五滴蓝，一次限制1000$。"<<endl;
					cout<<"请输入金额："<<endl;
					cin>>bulan;
					cout<<"您要补"<<bulan*5<<"滴蓝,"<<"售价为:"<<bulan;
					cout<<",您要购买吗？(Y是/N否)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=bulan;
						lan=lan+=bulan*10;
						cout<<"购买成功！"<<endl;
					}
				}
				if(shopxz==3)
				{
					cout<<"魔法球售价为$1100，一次买一个(Y是/N否)。"<<endl; 
					cin>>maimofaqiu;
					if(maimofaqiu=='Y'||maimofaqiu=='y')
					{
						qian-=1100;
						mofaqiu++;
					}
				}
				if(shopxz==4)
				{
					cout<<"让所有绝招耗费的蓝降低3(攻击力加5)需$2000（Y是/N否)"<<endl;
					cout<<xuanze;
					if(xuanze=='Y'||xuanze=='y')
					{
						juezhaos1-=3;
						juezhaox1+=5;
						juezhaos2-=3;
						juezhaox2+=5;
						juezhaos3-=3;
						juezhaox3+=5;
						juezhaos4-=3;
						juezhaox4+=5;
					}
				}
			}
			if(caozuo==7) cout<<"敬请期待..."<<endl<<endl;
			Sleep(1500);
			if(qian%3==0) cout<<minzi<<"闪过了攻击"<<endl;
			else
			{
				bossgong=rand()%230;
				xue-=bossgong;
				cout<<minzi<<"-"<<bossgong<<endl;
				if(xue-bossgong<=0)
				{
					xue=0;
				}
			}
			Sleep(1200);
		}
	    cout<<"恭喜获胜！"<<endl;
		cout<<"玩家"<<minzi<<"蓝上限+7，血上限+10，攻击力+5。"<<endl;
		gongjili+=5;
		lans+=7;
		xues+=10;
		xue=xues;
		bosss+=200;
		boss=bosss;
		qian+=400;
		cengshu++;
		cout<<"存档中..."<<endl;
			Sleep(1000);
			fout<<minzi<<endl;
			fout<<zy<<endl;
			fout<<cengshu<<endl;
			fout<<xue<<" "<<xues<<endl;
			fout<<lan<<" "<<lans<<endl;
			fout<<boss<<" "<<bosss<<endl;
			fout<<gongjili<<bossgong<<endl;
			fout<<qian<<endl;
			fout<<juezhao1<<juezhao2<<juezhao3<<juezhao4;
			fout<<juezhaos1<<juezhaos2<<juezhaos3<<juezhaos4;
		/*cout<<"您";Sleep(300);
		cout<<"已";Sleep(300);
		cout<<"解";Sleep(300);
		cout<<"锁";Sleep(300);
		cout<<"菜";Sleep(300);
		cout<<"单";Sleep(300);
		cout<<"，";Sleep(300);
		cout<<"进";Sleep(300);
		cout<<"入";Sleep(300);
		cout<<"菜";Sleep(300);
		cout<<"单";Sleep(300);
		cout<<"中";Sleep(300);
		cout<<"。";Sleep(300);*/
		}

		/*for(int i=1;i<=3;i++)
		{
			system("cls");
			cout<<"优化中";
			Sleep(300);
			cout<<".";
			Sleep(300);
			cout<<".";
			Sleep(300);
			cout<<".";
			Sleep(300);
		}*/
		
 cout<<"--------------------"<<endl;
 Sleep(1000);
 cout<<"未完待续..."<<endl;
 Sleep(1000);
 cout<<"超级男神_经出品"<<endl;
 Sleep(1000);
    fin.close();
    fout.close();
system("exit");
    return 0;
}

