#include<iostream>
using namespace std;

int main()
{
	int quant;
	int choice;
	//Quantity
	int Qty_rooms=0, Qty_pasta=0, Qty_burger=0, Qty_noodles=0, Qty_shake=0;
	//Food items sold and room booked
	int Sold_rooms=0, Sold_pasta=0, Sold_burger=0, Sold_noodles=0, Sold_shake=0;
	//Total Price of Food items and room
	int Totalprice_rooms=0, Totalprice_pasta=0, Totalprice_burger=0, Totalprice_noodles=0, Totalprice_shake=0;
	
	cout<<"\n\n\t\t\t  Quantity of items we have in Hotel"; // \t for horizontal space
	cout<<"\n\n Rooms available:";
	cin>>Qty_rooms;
	cout<<"\n Quantity of Pasta:";
	cin>>Qty_pasta;
	cout<<"\n Quantity of Burger:";
	cin>>Qty_burger;
	cout<<"\n Quantity of Noodles:";
	cin>>Qty_noodles;
	cout<<"\n Quantity of Shake:";
	cin>>Qty_shake;
	
	m:
	cout<<"\n\n\n\t\t\t Please select from the menu option ";
	cout<<"\n\n 1.Rooms";
	cout<<"\n 2.Pasta";
	cout<<"\n 3.Burger";
	cout<<"\n 4.Noodles";
	cout<<"\n 5.Shake";
	cout<<"\n 6.Information regarding sales and collection";
	cout<<"\n 7.Exit";
	
	cout<<"\n\n Please enter your choice:";
	cin>>choice; 
	
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter the number of rooms you want:";
			cin>>quant;
			if(Qty_rooms-Sold_rooms >=quant)
			{
				Sold_rooms=Sold_rooms+quant;
				Totalprice_rooms=Totalprice_rooms+quant*1200;
				cout<<"\n\n\t\t"<<quant<<" rooms are alloted to you";
				break;
				
				
			}
			else
			{
				cout<<"\n\t Only "<<Qty_rooms-Sold_rooms<<"rooms remaining in Hotel";
				break;
			}
			
		case 2:
			cout<<"\n\n Enter pasta quantity:";
			cin>>quant;
			if(Qty_pasta-Sold_pasta >=quant)
			{
				Sold_pasta=Sold_pasta+quant;
				Totalprice_pasta=Totalprice_pasta+quant*250;
				cout<<"\n\n\t\t"<<quant<<" pasta is the order!";
				break;
				
				
			}
			else
			{
				cout<<"\n\t Only "<<Qty_pasta-Sold_pasta<<" pasta remaining in Hotel";
				break;
			}
		case 3:
			cout<<"\n\n Enter Burger quantity:";
			cin>>quant;
			if(Qty_burger-Sold_burger >=quant)
			{
				Sold_burger=Sold_burger+quant;
				Totalprice_burger=Totalprice_burger+quant*120;
				cout<<"\n\n\t\t"<<quant<<" burger is the order!";
				break;
				
				
			}
			else
			{
				cout<<"\n\t Only "<<Qty_burger-Sold_burger<<" burger remaining in Hotel";
				break;
			}
		case 4:
			cout<<"\n\n Enter Noodles quantity:";
			cin>>quant;
			if(Qty_noodles-Sold_noodles >=quant)
			{
				Sold_noodles=Sold_noodles+quant;
				Totalprice_noodles=Totalprice_noodles+quant*250;
				cout<<"\n\n\t\t"<<quant<<" noodles is the order!";
				break;
				
				
			}
			else
			{
				cout<<"\n\t Only "<<Qty_noodles-Sold_noodles<<" noodles remaining in Hotel";
				break;
			}	
		case 5:
			cout<<"\n\n Enter Shakes quantity:";
			cin>>quant;
			if(Qty_shake-Sold_shake >=quant)
			{
				Sold_shake=Sold_shake+quant;
				Totalprice_shake=Totalprice_shake+quant*120;
				cout<<"\n\n\t\t"<<quant<<" shake is the order!";
				break;
				
				
			}
			else
			{
				cout<<"\n\t Only "<<Qty_shake-Sold_shake<<" shake remaining in Hotel";
				break;
			}		
		case 6:
			cout<<"\n\n\t\t\t Details of sales and collection";
			cout<<"\n\n Number of rooms we had: "<<Qty_rooms;
			cout<<"\n\n Number of rooms we gave for rent: "<<Sold_rooms;
			cout<<"\n\n Remaining rooms: "<<(Qty_rooms-Sold_rooms);
			cout<<"\n\n Total rooms collection for the day: "<<Totalprice_rooms;
			
			
			cout<<"\n\n Number of pastas we had: "<<Qty_pasta;
			cout<<"\n\n Number of pastas we sold: "<<Sold_pasta;
			cout<<"\n\n Remaining pastas: "<<(Qty_pasta-Sold_pasta);
			cout<<"\n\n Total pasta collection for the day: "<<Totalprice_pasta;
			
			cout<<"\n\n Number of burger we had: "<<Qty_burger;
			cout<<"\n\n Number of burger we sold: "<<Sold_burger;
			cout<<"\n\n Remaining burger: "<<(Qty_burger-Sold_burger);
			cout<<"\n\n Total burger collection for the day: "<<Totalprice_burger;
			
			cout<<"\n\n Number of noodles we had: "<<Qty_noodles;
			cout<<"\n\n Number of noodles we sold: "<<Sold_noodles;
			cout<<"\n\n Remaining noodles: "<<(Qty_noodles-Sold_noodles);
			cout<<"\n\n Total noodles collection for the day: "<<Totalprice_noodles;
			
			
			cout<<"\n\n Number of shakes we had: "<<Qty_shake;
			cout<<"\n\n Number of shakes we sold: "<<Sold_shake;
			cout<<"\n\n Remaining shakes: "<<(Qty_shake-Sold_shake);
			cout<<"\n\n Total shakes collection for the day: "<<Totalprice_shake;
			
			
			cout<<"\n\n\n Total Collection for the day:"<<Totalprice_shake+Totalprice_noodles+Totalprice_burger+Totalprice_pasta+Totalprice_rooms;
			break;
			
		case 7:
			exit(0);
			
			default:
				cout<<"\n Please select the number mentioned above!";
				break;
	}
	goto m;
	
	
}
