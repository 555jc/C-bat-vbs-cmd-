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
	cout<<"             			����"<<endl<<endl<<endl<<endl<<endl;
	cout<<"             			|---------|"<<endl;
	cout<<"             			|   /     |"<<endl;
	cout<<"             			|  /      |"<<endl;
	cout<<"             			|  ----   |"<<endl;
	cout<<"             			|     /   |"<<endl;
	cout<<"             			|    /    |"<<endl;
	cout<<"             			|---------|"<<endl; 
	Sleep(5000);  
	system("cls");
	cout<<"�����ɣ�"<<endl; 
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
    cout<<"��1��ʼ����0�˳�����3����"<<endl;
    cin>>ji;
    while(ji!=1&&ji!=0&&ji!=3)
	{
		cout<<"����������¶�ȡ:"<<endl;
			cin>>ji;
	}
	if(ji==0)
	{
		cout<<"�������Ա���룬����ػ���"<<endl;
		cin>>kdxx;
		if(kdxx!=2500)
		{
			cout<<3;
			system("cls");Sleep(1000);
			cout<<2;
			system("cls");Sleep(1000);
			cout<<1;
			system("cls");Sleep(1000);
			cout<<"�ػ���" ;
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
    cout<<"������Ĵ�����"<<endl;
    cin>>minzi;
    	while(ji!=1&&ji!=0)
		{
			cout<<"����������¶�ȡ:"<<endl;
			cin>>ji;
		}
		system("cls");
    	cout<<"1.Ҫ��Ҫ����������ڣ�";
	 
		cout<<"2.������555   5555";	
		cout<<"(��������Ϸ��������Ŷ)"<<endl;
		cin>>k;
		system("cls");
		if(k==1)
		{
			cout<<"�ܾúܾ���ǰ����һ����ħ";
			Sleep(1000);
			cout<<"������������ѧУ����У֮��";
			Sleep(1000);
			cout<<"������У��......�ﵽ�ڹ�������";
			Sleep(1000);
			cout<<"���ȵ�һ�����ҵ���У��..."<<endl;
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
			cout<<minzi<<":У������û�°�"<<endl;
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
			cout<<"  У����ɧ�꣬����ħ���������ס�������ħ��������300$��5��ħ����"<<endl;
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
			cout<<minzi<<":��������������������"<<endl;
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
			cout<<"  У����byebye��ȥ��������"<<endl;
			Sleep(1000);
			 
		}
    }
	    system("cls");
		cout<<"ģ�������..."<<endl;
		 Sleep(3000);
		 Sleep(1500);
		 system("cls");
		 cout<<"Ȼ����"<<endl;
		 Sleep(2000);
		 system("cls");
			cout<<"ѡ��һ��ְҵ:"<<endl;
			Sleep(1500);
			cout<<"1.��ʦ 2.սʿ 3.���� 4.ը���� 5.��ʿ 6.ɷ�� 7.������"<<endl;
			if(ji!=3)
			{
				cin>>zy;
				Sleep(1000);
				cout<<"�õ�"<<endl;
				Sleep(2000);
			}
			system("cls");
			if(zy==1)
			{
				juezhao1="1.��ħ��";
				juezhaos1=30;
				juezhaox1=15;
				juezhao2="2.��ħ��";
				juezhaos2=75;
				juezhaox2=80;
				juezhao3="3.���ٶ���";
				juezhaos3=235;
				juezhaox3=105;
				juezhao4="4.�塤ʱ���ֻ�ת";
				juezhaos4=580;
				juezhaox4=930;
				cout<<"���ľ����ǣ�"<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			if(zy==2)
			{
				juezhao1="1.��ն";
				juezhaos1=0;
				juezhaox1=20;
				juezhao2="2.��ն�����渽��30��";
				juezhaos2=80;
				juezhaox2=100;
				juezhao3="3.����ն";
				juezhaos3=130;
				juezhaox3=150;
				juezhao4="4.�桤���٤�ն";
				juezhaos4=300;
				juezhaox4=900;
				cout<<"���ľ����ǣ�"<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			if(zy==3)
			{
				juezhao1="1.��ŭ";
				juezhaos1=1;
				juezhaox1=15;
				juezhao2="2.���";
				juezhaos2=50;
				juezhaox2=150;
				juezhao3="3.������";
				juezhaos3=200;
				juezhaox3=800;
				juezhao4="4.����ȭ";
				juezhaos4=260;
				juezhaox4=950;
				cout<<"���ľ����ǣ�"<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			if(zy==4)
			{
				juezhao1="1.����";
				juezhaos1=20;
				juezhaox1=60;
				juezhao2="2.����";
				juezhaos2=100;
				juezhaox2=350;
				juezhao3="3.�˵�";
				juezhaos3=200;
				juezhaox3=790;
				juezhao4="4.�¡������ը";
				juezhaos4=666;
				juezhaox4=999;
				cout<<"���ľ����ǣ�"<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			if(zy==5)
			{
				juezhao1="1.�ټ��뷢";
				juezhaos1=30;
				juezhaox1=66;
				juezhao2="2.��ɱ";
				juezhaos2=100;
				juezhaox2=350;
				juezhao3="3.��";
				juezhaos3=100;
				juezhaox3=350;
				juezhao4="4.����ʿ֮��";
				juezhaos4=700;
				juezhaox4=777;
				cout<<"���ľ����ǣ�"<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			if(zy==6)
			{
				juezhao1="1.�Ծ�";
				juezhaos1=0;
				juezhaox1=48;
				juezhao2="2.���";
				juezhaos2=0;
				juezhaox2=387;
				juezhao3="3.ɷ��֮��";
				juezhaos3=100;
				juezhaox3=40; 
				juezhao4="4.�ۡ�˳������";
				juezhaos4=700;
				juezhaox4=777;
				cout<<"���ľ����ǣ�"<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			if(zy==7)
			{
				juezhao1="1.����";
				juezhaos1=10;
				juezhaox1=50;
				juezhao2="2.ľ��";
				juezhaos2=50;
				juezhaox2=300;
				juezhao3="3.����ٿ�";
				juezhaos3=80;
				juezhaox3=321;
				juezhao4="4.��������";
				juezhaos4=500;
				juezhaox4=888;
				cout<<"���ľ����ǣ�"<<endl;
				cout<<juezhao1<<endl;
				cout<<juezhao2<<endl;
				cout<<juezhao3<<endl;
				cout<<juezhao4<<endl;
			}
			Sleep(3000);
		    system("cls");
			if(cengshu==1)
			{
				cout<<"��"<<cengshu<<"��"<<endl; 
				cout<<"------------"<<endl;
				cout<<"|          |"<<endl;
				cout<<"| ����$100 |"<<endl;
				cout<<"|          |"<<endl;
				cout<<"------------"<<endl;
				system("pause>nul");
				cout<<"���������ʼ";
				system("cls");
				cout<<"����������...";
				Sleep(3000);
				while(boss>0)
			{
			if(xue<=0)
			{
				cout<<"���Ѱܱ���ʧȥ$50"<<endl;
				xue=xues;
				lan=lans;
				qian-=50;
			}
			system("cls");
			cout<<minzi<<":"<<"Ѫ����"<<xue<<"/"<<xues<<" ����"<<lan<<"/"<<lans<<"    "<<"������:"<<gongjili<<" ";
			cout<<"����"<<":"<<"Ѫ����"<<boss<<"/"<<bosss<<endl<<endl;
			cout<<juezhao1<<" "<<"�ķ�����"<<juezhaos1<<endl;
			cout<<juezhao2<<" "<<"�ķ�����"<<juezhaos2<<endl;
			cout<<juezhao3<<" "<<"�ķ�����"<<juezhaos3<<endl;
			cout<<juezhao4<<" "<<"�ķ�����"<<juezhaos4<<endl;
			cout<<"5.��ͨ����"<<endl;
           	cout<<"6.�̵�"<<endl;
			cout<<"7.����"<<endl<<endl;
			cin>>caozuo;
			if(caozuo==1)
			{
			     if(lan<=0||lan-juezhaos1<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos1;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox1;
					cout<<"����-"<<juezhaox1<<endl;
				}
				else cout<<"���������˹���"<<endl; 
				}
				
			}
				
				
			if(caozuo==2)
			{
			   if(lan<=0||lan-juezhaos2<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos2;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox2;
					cout<<"����-"<<juezhaox2<<endl;
				}
				else cout<<"���������˹���"<<endl; 
				}
				
				
			}
			if(caozuo==3)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				} 
				else
				{
					lan-=juezhaos3;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox3;
					cout<<"����-"<<juezhaox3<<endl;
				}
				else cout<<"���������˹���"<<endl;
				if(lan<=0)
				{
					cout<<"������!"<<endl;
				} 
				}
				
			}
			if(caozuo==4)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos4;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox4;
					cout<<"����-"<<juezhaox4<<endl; 
				}
				else cout<<"���������˹���"<<endl; 
				}
				
			    
			}
			if(caozuo==5)
			{
				boss-=gongjili;
				cout<<"����-"<<gongjili<<endl;
			}
			if(caozuo==6)
			{
				cout<<"���Ľ��ʣ�ࣺ"<<qian<<endl;
				Sleep(100);
				cout<<"1.��Ѫ 2.���� 3.ħ���� 4.������"<<endl;
				cin>>shopxz;
				if(shopxz==1)
				{
					cout<<"1$ʮ��Ѫ��һ������10000$��"<<endl;
					cout<<"�������"<<endl;
					cin>>buxue;
					cout<<"��Ҫ��"<<buxue*10<<"��Ѫ,"<<"�ۼ�Ϊ:"<<buxue;
					cout<<",��Ҫ������(Y��/N��)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=buxue;
						xue=xue+=buxue*10;
						cout<<"����ɹ���"<<endl;
					}
				}
				if(shopxz==2)
				{
					cout<<"1$�������һ������1000$��"<<endl;
					cout<<"�������"<<endl;
					cin>>bulan;
					cout<<"��Ҫ��"<<bulan*5<<"����,"<<"�ۼ�Ϊ:"<<bulan;
					cout<<",��Ҫ������(Y��/N��)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=bulan;
						lan=lan+=bulan*10;
						cout<<"����ɹ���"<<endl;
					}
				}
				if(shopxz==3)
				{
					cout<<"ħ�����ۼ�Ϊ$1100��һ����һ��(Y��/N��)��"<<endl; 
					cin>>maimofaqiu;
					if(maimofaqiu=='Y'||maimofaqiu=='y')
					{
						qian-=1100;
						mofaqiu++;
					}
				}
				if(shopxz==4)
				{
					cout<<"�����о��кķѵ�������3(��������5)��$2000��Y��/N��)"<<endl;
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
			if(caozuo==7) cout<<"�����ڴ�..."<<endl<<endl;
			Sleep(1500);
			if(qian%3==0) cout<<minzi<<"�����˹���"<<endl;
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
				cout<<"��ϲ��ʤ��"<<endl;
				cout<<"���"<<minzi<<"������+15��Ѫ����+20��������+5��"<<endl;
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
			cout<<"�浵��..."<<endl;
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
			cout<<"��"<<cengshu<<"��"<<endl; 
		cout<<"------------"<<endl;
		cout<<"|          |"<<endl;
		cout<<"| ����$150 |"<<endl;
		cout<<"|          |"<<endl;
		cout<<"------------"<<endl;
		system("pause>nul");
		cout<<"���������ʼ";
		system("cls");
		cout<<"����������...";
		Sleep(3000);
        while(boss>0)
		{
			if(xue<=0)
			{
				cout<<"���Ѱܱ���ʧȥ$50"<<endl;
				xue=xues;
				lan=lans;
				qian-=50;
			}
			system("cls");
			cout<<minzi<<":"<<"Ѫ����"<<xue<<"/"<<xues<<" ����"<<lan<<"/"<<lans<<"    "<<"������:"<<gongjili<<" ";
			cout<<"������"<<":"<<"Ѫ����"<<boss<<"/"<<bosss<<endl<<endl;
			cout<<juezhao1<<" "<<"�ķ�����"<<juezhaos1<<endl;
			cout<<juezhao2<<" "<<"�ķ�����"<<juezhaos2<<endl;
			cout<<juezhao3<<" "<<"�ķ�����"<<juezhaos3<<endl;
			cout<<juezhao4<<" "<<"�ķ�����"<<juezhaos4<<endl;
			cout<<"5.��ͨ����"<<endl;
           	cout<<"6.�̵�"<<endl;
			cout<<"7.����"<<endl<<endl;
			cin>>caozuo;
			if(caozuo==1)
			{
			     if(lan<=0||lan-juezhaos1<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos1;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox1;
					cout<<"������-"<<juezhaox1<<endl;
				}
				else cout<<"�����������˹���"<<endl; 
				}
				
			}
				
				
			if(caozuo==2)
			{
			   if(lan<=0||lan-juezhaos2<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos2;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox2;
					cout<<"������-"<<juezhaox2<<endl;
				}
				else cout<<"�����������˹���"<<endl; 
				}
				
				
			}
			if(caozuo==3)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				} 
				else
				{
					lan-=juezhaos3;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox3;
					cout<<"������-"<<juezhaox3<<endl;
				}
				else cout<<"�����������˹���"<<endl;
				if(lan<=0)
				{
					cout<<"������!"<<endl;
				} 
				}
				
			}
			if(caozuo==4)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos4;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox4;
					cout<<"������-"<<juezhaox4<<endl; 
				}
				else cout<<"�����������˹���"<<endl; 
				}
				
			    
			}
			if(caozuo==5)
			{
				boss-=gongjili;
				cout<<"������-"<<gongjili<<endl;
			}
			if(caozuo==6)
			{
				cout<<"���Ľ��ʣ�ࣺ"<<qian<<endl;
				Sleep(100);
				cout<<"1.��Ѫ 2.���� 3.ħ���� 4.������"<<endl;
				cin>>shopxz;
				if(shopxz==1)
				{
					cout<<"1$ʮ��Ѫ��һ������10000$��"<<endl;
					cout<<"�������"<<endl;
					cin>>buxue;
					cout<<"��Ҫ��"<<buxue*10<<"��Ѫ,"<<"�ۼ�Ϊ:"<<buxue;
					cout<<",��Ҫ������(Y��/N��)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=buxue;
						xue=xue+=buxue*10;
						cout<<"����ɹ���"<<endl;
					}
				}
				if(shopxz==2)
				{
					cout<<"1$�������һ������1000$��"<<endl;
					cout<<"�������"<<endl;
					cin>>bulan;
					cout<<"��Ҫ��"<<bulan*5<<"����,"<<"�ۼ�Ϊ:"<<bulan;
					cout<<",��Ҫ������(Y��/N��)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=bulan;
						lan=lan+=bulan*10;
						cout<<"����ɹ���"<<endl;
					}
				}
				if(shopxz==3)
				{
					cout<<"ħ�����ۼ�Ϊ$1100��һ����һ��(Y��/N��)��"<<endl; 
					cin>>maimofaqiu;
					if(maimofaqiu=='Y'||maimofaqiu=='y')
					{
						qian-=1100;
						mofaqiu++;
					}
				}
				if(shopxz==4)
				{
					cout<<"�����о��кķѵ�������3(��������5)��$2000��Y��/N��)"<<endl;
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
			if(caozuo==7) cout<<"�����ڴ�..."<<endl<<endl;
			Sleep(1500);
			if(qian%3==0) cout<<minzi<<"�����˹���"<<endl;
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
		cout<<"��ϲ��ʤ��"<<endl;
		cout<<"���"<<minzi<<"������+22��Ѫ����+13��������+7��"<<endl;
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
		cout<<"�浵��..."<<endl;
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
									cout<<"��"<<cengshu<<"��"<<endl; 
		cout<<"------------"<<endl;
		cout<<"|          |"<<endl;
		cout<<"| ����$350 |"<<endl;
		cout<<"|          |"<<endl;
		cout<<"------------"<<endl;
		system("pause>nul");
		cout<<"���������ʼ";
		system("cls");
		cout<<"����������...";
		Sleep(3000);
        while(boss>0)
		{
			if(xue<=0)
			{
				cout<<"���Ѱܱ���ʧȥ$51"<<endl;
				xue=xues;
				lan=lans;
				qian-=50;
			}
			system("cls");
			cout<<minzi<<":"<<"Ѫ����"<<xue<<"/"<<xues<<" ����"<<lan<<"/"<<lans<<"    "<<"������:"<<gongjili<<" ";
			cout<<"���컨"<<":"<<"Ѫ����"<<boss<<"/"<<bosss<<endl<<endl;
			cout<<juezhao1<<" "<<"�ķ�����"<<juezhaos1<<endl;
			cout<<juezhao2<<" "<<"�ķ�����"<<juezhaos2<<endl;
			cout<<juezhao3<<" "<<"�ķ�����"<<juezhaos3<<endl;
			cout<<juezhao4<<" "<<"�ķ�����"<<juezhaos4<<endl;
			cout<<"5.��ͨ����"<<endl;
           	cout<<"6.�̵�"<<endl;
			cout<<"7.����"<<endl<<endl;
			cin>>caozuo;
			if(caozuo==1)
			{
			     if(lan<=0||lan-juezhaos1<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos1;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox1;
					cout<<"���컨-"<<juezhaox1<<endl;
				}
				else cout<<"���컨�����˹���"<<endl; 
				}
				
			}
				
				
			if(caozuo==2)
			{
			   if(lan<=0||lan-juezhaos2<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos2;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox2;
					cout<<"���컨-"<<juezhaox2<<endl;
				}
				else cout<<"���컨�����˹���"<<endl; 
				}
				
				
			}
			if(caozuo==3)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				} 
				else
				{
					lan-=juezhaos3;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox3;
					cout<<"���컨-"<<juezhaox3<<endl;
				}
				else cout<<"���컨�����˹���"<<endl;
				if(lan<=0)
				{
					cout<<"������!"<<endl;
				} 
				}
				
			}
			if(caozuo==4)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos4;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox4;
					cout<<"���컨-"<<juezhaox4<<endl; 
				}
				else cout<<"���컨�����˹���"<<endl; 
				}
				
			    
			}
			if(caozuo==5)
			{
				boss-=gongjili;
				cout<<"���컨-"<<gongjili<<endl;
			}
			if(caozuo==6)
			{
				cout<<"���Ľ��ʣ�ࣺ"<<qian<<endl;
				Sleep(100);
				cout<<"1.��Ѫ 2.���� 3.ħ���� 4.������"<<endl;
				cin>>shopxz;
				if(shopxz==1)
				{
					cout<<"1$ʮ��Ѫ��һ������10000$��"<<endl;
					cout<<"�������"<<endl;
					cin>>buxue;
					cout<<"��Ҫ��"<<buxue*10<<"��Ѫ,"<<"�ۼ�Ϊ:"<<buxue;
					cout<<",��Ҫ������(Y��/N��)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=buxue;
						xue=xue+=buxue*10;
						cout<<"����ɹ���"<<endl;
					}
				}
				if(shopxz==2)
				{
					cout<<"1$�������һ������1000$��"<<endl;
					cout<<"�������"<<endl;
					cin>>bulan;
					cout<<"��Ҫ��"<<bulan*5<<"����,"<<"�ۼ�Ϊ:"<<bulan;
					cout<<",��Ҫ������(Y��/N��)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=bulan;
						lan=lan+=bulan*10;
						cout<<"����ɹ���"<<endl;
					}
				}
				if(shopxz==3)
				{
					cout<<"ħ�����ۼ�Ϊ$1100��һ����һ��(Y��/N��)��"<<endl; 
					cin>>maimofaqiu;
					if(maimofaqiu=='Y'||maimofaqiu=='y')
					{
						qian-=1100;
						mofaqiu++;
					}
				}
				if(shopxz==4)
				{
					cout<<"�����о��кķѵ�������3(��������5)��$2000��Y��/N��)"<<endl;
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
			if(caozuo==7) cout<<"�����ڴ�..."<<endl<<endl;
			Sleep(1500);
			if(qian%3==0) cout<<minzi<<"�����˹���"<<endl;
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
		cout<<"��ϲ��ʤ"<<endl;
		Sleep(2000); 
		cout<<"���Ѿ���ʶ������Խ��Խǿ���Լ�����Ҳ�����Զ��ظ���"<<endl;
		Sleep(2000);
		cout<<"�㽫������ʽ��ս"<<endl;
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
		cout<<"�浵��..."<<endl;
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
					cout<<"��"<<cengshu<<"��"<<endl; 
		cout<<"------------"<<endl;
		cout<<"|          |"<<endl;
		cout<<"| ����$400 |"<<endl;
		cout<<"| ������7  |"<<endl;
		cout<<"|          |"<<endl;
		cout<<"------------"<<endl;
		system("pause>nul");
		cout<<"���������ʼ";
		system("cls");
		cout<<"����������...";
		Sleep(3000);
        while(boss>0)
		{
			if(xue<=0)
			{
				cout<<"���Ѱܱ���ʧȥ$50"<<endl;
				xue=xues;
				lan=lans;
				qian-=50;
			}
			system("cls");
			cout<<minzi<<":"<<"Ѫ����"<<xue<<"/"<<xues<<" ����"<<lan<<"/"<<lans<<"    "<<"������:"<<gongjili<<" ";
			cout<<"������"<<":"<<"Ѫ����"<<boss<<"/"<<bosss<<endl<<endl;
			cout<<juezhao1<<" "<<"�ķ�����"<<juezhaos1<<endl;
			cout<<juezhao2<<" "<<"�ķ�����"<<juezhaos2<<endl;
			cout<<juezhao3<<" "<<"�ķ�����"<<juezhaos3<<endl;
			cout<<juezhao4<<" "<<"�ķ�����"<<juezhaos4<<endl;
			cout<<"5.��ͨ����"<<endl;
           	cout<<"6.�̵�"<<endl;
			cout<<"7.����"<<endl<<endl;
			cin>>caozuo;
			if(caozuo==1)
			{
			     if(lan<=0||lan-juezhaos1<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos1;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox1;
					cout<<"������-"<<juezhaox1<<endl;
				}
				else cout<<"�����������˹���"<<endl; 
				}
				
			}
				
				
			if(caozuo==2)
			{
			   if(lan<=0||lan-juezhaos2<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos2;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox2;
					cout<<"������-"<<juezhaox2<<endl;
				}
				else cout<<"�����������˹���"<<endl; 
				}
				
				
			}
			if(caozuo==3)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				} 
				else
				{
					lan-=juezhaos3;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox3;
					cout<<"������-"<<juezhaox3<<endl;
				}
				else cout<<"�����������˹���"<<endl;
				if(lan<=0)
				{
					cout<<"������!"<<endl;
				} 
				}
				
			}
			if(caozuo==4)
			{
				if(lan<=0||lan-juezhaos3<=0)
				{
					cout<<"������!"<<endl;
					lan=0;
				}
				else
				{
					lan-=juezhaos4;
				if((bosss-boss)%2==0)
				{
					boss-=juezhaox4;
					cout<<"������-"<<juezhaox4<<endl; 
				}
				else cout<<"�����������˹���"<<endl; 
				}
				
			    
			}
			if(caozuo==5)
			{
				boss-=gongjili;
				cout<<"������-"<<gongjili<<endl;
			}
			if(caozuo==6)
			{
				cout<<"���Ľ��ʣ�ࣺ"<<qian<<endl;
				Sleep(100);
				cout<<"1.��Ѫ 2.���� 3.ħ���� 4.������"<<endl;
				cin>>shopxz;
				if(shopxz==1)
				{
					cout<<"1$ʮ��Ѫ��һ������10000$��"<<endl;
					cout<<"�������"<<endl;
					cin>>buxue;
					cout<<"��Ҫ��"<<buxue*10<<"��Ѫ,"<<"�ۼ�Ϊ:"<<buxue;
					cout<<",��Ҫ������(Y��/N��)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=buxue;
						xue=xue+=buxue*10;
						cout<<"����ɹ���"<<endl;
					}
				}
				if(shopxz==2)
				{
					cout<<"1$�������һ������1000$��"<<endl;
					cout<<"�������"<<endl;
					cin>>bulan;
					cout<<"��Ҫ��"<<bulan*5<<"����,"<<"�ۼ�Ϊ:"<<bulan;
					cout<<",��Ҫ������(Y��/N��)"<<endl;
					cin>>xuanze;
					if(xuanze=='y'||xuanze=='Y')
					{
						qian-=bulan;
						lan=lan+=bulan*10;
						cout<<"����ɹ���"<<endl;
					}
				}
				if(shopxz==3)
				{
					cout<<"ħ�����ۼ�Ϊ$1100��һ����һ��(Y��/N��)��"<<endl; 
					cin>>maimofaqiu;
					if(maimofaqiu=='Y'||maimofaqiu=='y')
					{
						qian-=1100;
						mofaqiu++;
					}
				}
				if(shopxz==4)
				{
					cout<<"�����о��кķѵ�������3(��������5)��$2000��Y��/N��)"<<endl;
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
			if(caozuo==7) cout<<"�����ڴ�..."<<endl<<endl;
			Sleep(1500);
			if(qian%3==0) cout<<minzi<<"�����˹���"<<endl;
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
	    cout<<"��ϲ��ʤ��"<<endl;
		cout<<"���"<<minzi<<"������+7��Ѫ����+10��������+5��"<<endl;
		gongjili+=5;
		lans+=7;
		xues+=10;
		xue=xues;
		bosss+=200;
		boss=bosss;
		qian+=400;
		cengshu++;
		cout<<"�浵��..."<<endl;
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
		/*cout<<"��";Sleep(300);
		cout<<"��";Sleep(300);
		cout<<"��";Sleep(300);
		cout<<"��";Sleep(300);
		cout<<"��";Sleep(300);
		cout<<"��";Sleep(300);
		cout<<"��";Sleep(300);
		cout<<"��";Sleep(300);
		cout<<"��";Sleep(300);
		cout<<"��";Sleep(300);
		cout<<"��";Sleep(300);
		cout<<"��";Sleep(300);
		cout<<"��";Sleep(300);*/
		}

		/*for(int i=1;i<=3;i++)
		{
			system("cls");
			cout<<"�Ż���";
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
 cout<<"δ�����..."<<endl;
 Sleep(1000);
 cout<<"��������_����Ʒ"<<endl;
 Sleep(1000);
    fin.close();
    fout.close();
system("exit");
    return 0;
}

