#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>

using namespace std;
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

char rev,more,text[10];
 struct PCComponent
	{
    string name;
    int price;
	};
void recommendPC(int budget)
{
    PCComponent cpu1 = {"AMD Ryzen 7 9800x3D", 205000};
    PCComponent cpu2 = {"Intel I9 14900k", 150000};
    PCComponent cpu3 = {"AMD Ryzen 7 7800x3d", 120000};
    PCComponent cpu4 = {"Intel i5 12400f", 30000};
    PCComponent cpu5 = {"AMD Ryzen 5 3600", 18000};
    PCComponent cpu6 = {"Intel i7 4790", 12000};
    PCComponent cpu7 = {"Intel i7 3770", 6000};
    PCComponent cpu8 = {"Intel i5 3570", 3000};
    PCComponent cpu9 = {"Intel i7 14900K", 120000};
    PCComponent cpu10 = {"Intel i3 3220", 2000};

    PCComponent ram1 = {"128GB DDR5 6800MHz", 80000};
    PCComponent ram2 = {"64GB DDR5 5600MHz", 50000};
    PCComponent ram3 = {"32GB DDR4 4800MHz", 38000};
    PCComponent ram4 = {"32GB DDR4 3200MHz", 25000};
    PCComponent ram5 = {"16GB DDR4 200MHz", 8000};
    PCComponent ram6 = {"16GB DDR3 1600MHz", 4000};
    PCComponent ram7 = {"16GB DDR3 1600MHz", 4000};
    PCComponent ram8 = {"8GB DDR3 1600MHz", 2000};
    PCComponent ram9 = {"32GB DDR4 4800MHz", 38000};
    PCComponent ram10 = {"8GB DDR3 1600MHz", 2000};

    PCComponent gpu1 = {"NVIDIA RTX 5090", 550000};
    PCComponent gpu2 = {"NVIDIA RTX 4090", 240000};
    PCComponent gpu3 = {"NVIDIA RTX 4070", 180000};
    PCComponent gpu4 = {"NVIDIA RTX 3060", 80000};
    PCComponent gpu5 = {"NVIDIA GTX 1660S", 45000};
    PCComponent gpu6 = {"AMD RX 580", 24000};
    PCComponent gpu7 = {"AMD RX 470", 15000};
    PCComponent gpu8 = {"NVIDIA GTX 750TI", 12000};
    PCComponent gpu9 = {"MSI Gaming RTX 4080 Super ", 225000};
    PCComponent gpu10 = {"Intel HD 2000  ", 0};

    PCComponent storage1 = {"4TB NVME", 80000};
    PCComponent storage2 = {"4TB NVME", 80000};
    PCComponent storage3 = {"3TB NVME", 60000};
    PCComponent storage4 = {"2TB NVME", 40000};
    PCComponent storage5 = {"1TB NVME", 15000};
    PCComponent storage6 = {"512GB SSD", 6000};
    PCComponent storage7 = {"256GB SSD", 4000};
    PCComponent storage8 = {"500GB HDD", 1500};
    PCComponent storage9 = {"4TB NVME", 80000};
    PCComponent storage10 = {"500 GB HDD", 1500};

    PCComponent motherboard1 = {"Asus Tuff X870", 128000};
    PCComponent motherboard2 = {"Asus Tuff Z790", 180000};
    PCComponent motherboard3 = {"Asus Tuff X670", 95000};
    PCComponent motherboard4 = {"MSI H610", 25000};
    PCComponent motherboard5 = {"Aorus B450", 20000};
    PCComponent motherboard6 = {"Gigabyte h81", 6000};
    PCComponent motherboard7 = {"Gigabyte h61", 4500};
    PCComponent motherboard8 = {"MSI h61", 4500};
    PCComponent motherboard9 = {"TUF GAMING Z790-PLUS ", 96000};
    PCComponent motherboard10 = {"Gigabyte h61", 4500};

    PCComponent psu1 = {"XPG 1200W PSU",55000};
    PCComponent psu2 = {"CoolerMaster 1200W PSU",50000};
    PCComponent psu3 = {"EVGA 850W PSU",47000};
    PCComponent psu4 = {"Corsair 650W PSU",18000};
    PCComponent psu5 = {"Silver Stone 550W PSU",14000};
    PCComponent psu6 = {"Seasonic 450W PSU",5000};
    PCComponent psu7 = {"Seasonic 450W PSU",5000};
    PCComponent psu8 = {"HP 350W PSU",2500};
    PCComponent psu9 = {"CoolerMaster 1200W PSU",50000};
    PCComponent psu10 = {"DELL 250W PSU",1500};

    PCComponent case1 = {"lianli FishTank LI011 Case", 35000};
    PCComponent case2 = {"lianli FishTank LI010 Case", 30000};
    PCComponent case3 = {"lianli Fish Tank LI08 Case", 28000};
    PCComponent case4 = {"NZXT H7 Case", 20000};
    PCComponent case5 = {"CORSAIR 3000D Case", 15000};
    PCComponent case6 = {"COUGAR MX120 Case", 10000};
    PCComponent case7 = {"COUGAR MX120 Case", 10000};
    PCComponent case8 = {"STANDARD TOWER Case", 1500};
    PCComponent case9 = {"lianli Fish Tank LI08 Case", 28000};
    PCComponent case10 = {"STANDARD TOWER Case", 1000};

    PCComponent cooling1 = {"Liquid Cooler", 25000};
    PCComponent cooling2 = {"Liquid Cooler", 22000};
    PCComponent cooling3 = {"Liquid Cooler", 20000};
    PCComponent cooling4 = {"Liquid Cooler", 15000};
    PCComponent cooling5 = {"AIR Cooler", 8000};
    PCComponent cooling6 = {"AIR Cooler", 2500};
    PCComponent cooling7 = {"AIR Cooler", 2500};
    PCComponent cooling8 = {"STOCK Cooler",500};
    PCComponent cooling9 = {"Liquid Cooler", 20000};
    PCComponent cooling10 = {"STOCK Cooler",500};

c:
    system("cls");
        setColor(6);
        cout <<"\t  /  \\    /  \\ ____ |  | ____  ____    _____   ____ \n";
        cout <<"\t  \\   \\/\\/   // __ \\|  |/ ___\\/  _ \\  /     \\ / __ \\\n";
        cout <<"\t   \\        /|  ___/|  |  \\__(  <_> )|  Y Y  | ___ /  \n";
        cout <<"\t    \\__/\\__/  \\____\\|__|\\_____>____/ |__|_|__|\\____\\\n";
        cout <<" ----------------------------------------------------------------- "<< endl;
        cout << "\t		  !MIB COMPUTERS!	" << endl << endl;

        setColor(7);
        cout << "\nEnter your budget for the PC build Rs :";
        cin >> budget;

        cout<<endl;
        cout << "Recommended PC Specs based on your budget of Rs" << budget << ":\n";

     if ( budget >1158000  )
	{
        cout<<endl;
        cout << "\n\n\n\n\n\t\t\t\t\t\tThere is no Build available in RS:"<<budget;
        cout<<endl;
        cout<<"\t\t\t\t\t\tcheck other builds or Stay tuned for more... "<<endl;
        cout<<"\n\n\n\n\n\n";

        cout<<"Would you like to check more builds (Y/N)"<<endl;
        cout<<"\nPress Y for YES and N for NO Review (Y/N):";
        cin>>more;
        if(more=='Y' || more=='y')
        {
            goto c;
        }

        else if(more=='N' || more=='n')
        {
            cout<<endl;

        }

    }

        // 1 build
    	else if ( budget <=1158000 && budget >=900000 )
	{
	    setColor(6);
        cout<<endl;
        cout <<"---------------------------------------------------------"<<endl;
	    cout <<"|COMPONENTS    |        MODEL             |   PRICE     |      "<<endl;
	    cout <<"|--------------|--------------------------|-------------|"<<endl;
        cout <<"|CPU           |" << cpu1.name << "\t  |Rs :" << cpu1.price << "\t|\n";
        cout <<"|RAM           |" << ram1.name << "\t  |Rs :" << ram1.price << " \t|\n";
        cout <<"|GPU           |" << gpu1.name << "\t\t  |Rs :" << gpu1.price << "\t|\n";
        cout <<"|Storage       |" << storage1.name <<"\t\t  |Rs :" << storage1.price << "\t|\n";
        cout <<"|Motherboard   |" << motherboard1.name <<"\t\t  |Rs :" << motherboard1.price << "\t|\n";
        cout <<"|PSU           |" << psu1.name << "\t\t  |Rs :" << psu1.price << "\t|\n";
        cout <<"|Case          |" << case1.name << "|Rs :" << case1.price << "\t|\n";
        cout <<"|Cooling       |" << cooling1.name <<"\t\t  |Rs :" << cooling1.price << "\t|\n";
        cout << "---------------------------------------------------------"<<endl;


        int total = cpu1.price + ram1.price + gpu1.price + storage1.price + motherboard1.price + psu1.price + case1.price + cooling1.price ;
        cout << "\t\tTotal price:" << total << "\n\n\n";

        setColor(7);
        cout<<"Would you like to check more builds ?"<<endl;
        cout<<"Press Y for YES and N for NO (Y/N):";
        cin>>more;

        if(more=='Y' || more=='y')
        {
            goto c;
        }

        else if(more=='N' || more=='n')
        {
            cout<<endl;

        }


        cout<<"We would like to have your review about the build we suggested."<<endl;
        cout<<"Press Y to give a review and N to skip. (Y/N):";
        cin>>rev;

        if(rev=='Y' || rev=='y')
        {
            cout<<endl;
            cout<<"Enter your review :";
            cin.get(text,10,'$');
            cout<<"\n\t\t\tThank you so much for your Review!.\n\n\n";

        }

        else if(rev=='N' || rev=='n')
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t\t\tYou have Skill Issue :)\n\n\n\n";

        }

    }

        // 2 build
		else if (budget <= 899999 && budget >=750000)
	{
	    setColor(6);
	    cout<<endl;
        cout <<"---------------------------------------------------------"<<endl;
	    cout <<"|COMPONENTS    |        MODEL             |   PRICE     |      "<<endl;
	    cout <<"|--------------|--------------------------|-------------|"<<endl;
        cout <<"|CPU           |" << cpu2.name << "\t\t  |Rs :" << cpu2.price << "\t|\n";
        cout <<"|RAM           |" << ram2.name << "\t  |Rs :" << ram2.price << " \t|\n";
        cout <<"|GPU           |" << gpu2.name << "\t\t  |Rs :" << gpu2.price << "\t|\n";
        cout <<"|Storage       |" << storage2.name <<"\t\t  |Rs :" << storage2.price << "\t|\n";
        cout <<"|Motherboard   |" << motherboard2.name <<"\t\t  |Rs :" << motherboard2.price << "\t|\n";
        cout <<"|PSU           |" << psu2.name << "\t  |Rs :" << psu2.price << "\t|\n";
        cout <<"|Case          |" << case2.name << "|Rs :" << case2.price << "\t|\n";
        cout <<"|Cooling       |" << cooling2.name <<"\t\t  |Rs :" << cooling2.price << "\t|\n";
        cout << "---------------------------------------------------------"<<endl;

        int total = cpu2.price + ram2.price + gpu2.price + storage2.price + motherboard2.price + psu2.price + case2.price + cooling2.price ;
        cout << "\t\tTotal price:" << total << "\n\n\n\n\n";

        setColor(7);
        cout<<"Would you like to check more builds ?"<<endl;
        cout<<"Press Y for YES and N for NO (Y/N):";
        cin>>more;

        if(more=='Y' || more=='y')
        {
            goto c;
        }

        else if(more=='N' || more=='n')
        {
            cout<<endl;

        }

        cout<<"We would like to have your review about the build we suggested."<<endl;
        cout<<"Press Y to give a review and N to skip. (Y/N):";
        cin>>rev;

        if(rev=='Y' || rev=='y')
        {
            cout<<endl;
            cout<<"Enter your review :";
            cin.get(text,10,'$');
            cout<<"\n\t\t\tThank you so much for your Review!.\n\n\n";

        }

        else if(rev=='N' || rev=='n')
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t\t\tYou have Skill Issue :)\n\n\n\n";

        }

    }

        // 9 build
		else if (budget <=749999  && budget >=625000)
	{
	    setColor(6);
	    cout<<endl;
        cout <<"---------------------------------------------------------"<<endl;
	    cout <<"|COMPONENTS    |        MODEL             |   PRICE     |      "<<endl;
	    cout <<"|--------------|--------------------------|-------------|"<<endl;
        cout <<"|CPU           |" << cpu9.name << "\t\t  |Rs :" << cpu9.price << "\t|\n";
        cout <<"|RAM           |" << ram9.name << "\t  |Rs :" << ram9.price << " \t|\n";
        cout <<"|GPU           |" << gpu9.name << "|Rs :" << gpu9.price << "\t|\n";
        cout <<"|Storage       |" << storage9.name <<"\t\t  |Rs :" << storage9.price << "\t|\n";
        cout <<"|Motherboard   |" << motherboard9.name <<"\t  |Rs :" << motherboard9.price << "\t|\n";
        cout <<"|PSU           |" << psu9.name << "\t  |Rs :" << psu9.price << "\t|\n";
        cout <<"|Case          |" << case9.name << "|Rs :" << case9.price << "\t|\n";
        cout <<"|Cooling       |" << cooling9.name <<"\t\t  |Rs :" << cooling9.price << "\t|\n";
        cout << "---------------------------------------------------------"<<endl;

        int total = cpu9.price + ram9.price + gpu9.price + storage9.price + motherboard9.price + psu9.price + case9.price + cooling9.price;
        cout << "\t\tTotal price:" << total << "\n\n\n\n\n";

        setColor(7);
        cout<<"Would you like to check more builds ?"<<endl;
        cout<<"Press Y for YES and N for NO (Y/N):";
        cin>>more;

        if(more=='Y' || more=='y')
        {
            goto c;
        }

        else if(more=='N' || more=='n')
        {
            cout<<endl;

        }


        cout<<"We would like to have your review about the build we suggested."<<endl;
        cout<<"Press Y to give a review and N to skip. (Y/N):";
        cin>>rev;

        if(rev=='Y' || rev=='y')
        {
            cout<<endl;
            cout<<"Enter your review :";
            cin.get(text,10,'$');
            cout<<"\n\t\t\tThank you so much for your Review!.\n\n\n";

        }

        else if(rev=='N' || rev=='n')
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t\t\tYou have Skill Issue :)\n\n\n\n";

        }

    }

        // 3 build
		else if (budget <= 624999 && budget >=350000)
	{
	    setColor(6);
        cout<<endl;
        cout <<"---------------------------------------------------------"<<endl;
	    cout <<"|COMPONENTS    |        MODEL             |   PRICE     |      "<<endl;
	    cout <<"|--------------|--------------------------|-------------|"<<endl;
        cout <<"|CPU           |" << cpu3.name << "\t  |Rs :" << cpu3.price << "\t|\n";
        cout <<"|RAM           |" << ram3.name << "\t  |Rs :" << ram3.price << " \t|\n";
        cout <<"|GPU           |" << gpu3.name << "\t\t  |Rs :" << gpu3.price << "\t|\n";
        cout <<"|Storage       |" << storage3.name <<"\t\t  |Rs :" << storage3.price << "\t|\n";
        cout <<"|Motherboard   |" << motherboard3.name <<"\t\t  |Rs :" << motherboard3.price << "\t|\n";
        cout <<"|PSU           |" << psu3.name << "\t\t  |Rs :" << psu3.price << "\t|\n";
        cout <<"|Case          |" << case3.name << "|Rs :" << case3.price << "\t|\n";
        cout <<"|Cooling       |" << cooling3.name <<"\t\t  |Rs :" << cooling3.price << "\t|\n";
        cout << "---------------------------------------------------------"<<endl;


        int total = cpu3.price + ram3.price + gpu3.price + storage3.price + motherboard3.price + psu3.price + case3.price + cooling3.price;
        cout << "\t\tTotal price:" << total << "\n\n\n\n\n";

        setColor(7);
        cout<<"Would you like to check more builds ?"<<endl;
        cout<<"Press Y for YES and N for NO (Y/N):";
        cin>>more;

        if(more=='Y' || more=='y')
        {
            goto c;
        }

        else if(more=='N' || more=='n')
        {
            cout<<endl;

        }


        cout<<"We would like to have your review about the build we suggested."<<endl;
        cout<<"Press Y to give a review and N to skip. (Y/N):";
        cin>>rev;

        if(rev=='Y' || rev=='y')
        {
            cout<<endl;
            cout<<"Enter your review :";
            cin.get(text,10,'$');
            cout<<"\n\t\t\tThank you so much for your Review!.\n\n\n";

        }

        else if(rev=='N' || rev=='n')
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t\t\tYou have Skill Issue :)\n\n\n\n";

        }

	}

        // 4 build
    	else if (budget <= 349999 && budget >=200000)
	{
	    setColor(6);
        cout<<endl;
        cout <<"---------------------------------------------------------"<<endl;
	    cout <<"|COMPONENTS    |        MODEL             |   PRICE     |      "<<endl;
	    cout <<"|--------------|--------------------------|-------------|"<<endl;
        cout <<"|CPU           |" << cpu4.name << "\t\t  |Rs :" << cpu4.price << "\t|\n";
        cout <<"|RAM           |" << ram4.name << "\t  |Rs :" << ram4.price << " \t|\n";
        cout <<"|GPU           |" << gpu4.name << "\t\t  |Rs :" << gpu4.price << "\t|\n";
        cout <<"|Storage       |" << storage4.name <<"\t\t  |Rs :" << storage4.price << "\t|\n";
        cout <<"|Motherboard   |" << motherboard4.name <<"\t\t  |Rs :" << motherboard4.price << "\t|\n";
        cout <<"|PSU           |" << psu4.name << "\t  |Rs :" << psu4.price << "\t|\n";
        cout <<"|Case          |" << case4.name << "\t\t  |Rs :" << case4.price << "\t|\n";
        cout <<"|Cooling       |" << cooling4.name <<"\t\t  |Rs :" << cooling4.price << "\t|\n";
        cout << "---------------------------------------------------------"<<endl;

        int total = cpu4.price + ram4.price + gpu4.price + storage4.price + motherboard4.price + psu4.price + case4.price + cooling4.price;
        cout << "\t\tTotal price:" << total << "\n\n\n\n\n";

        setColor(7);
        cout<<"Would you like to check more builds ?"<<endl;
        cout<<"Press Y for YES and N for NO (Y/N):";
        cin>>more;

        if(more=='Y' || more=='y')
        {
            goto c;
        }

        else if(more=='N' || more=='n')
        {
            cout<<endl;

        }


        cout<<"We would like to have your review about the build we suggested."<<endl;
        cout<<"Press Y to give a review and N to skip. (Y/N):";
        cin>>rev;

        if(rev=='Y' || rev=='y')
        {
            cout<<endl;
            cout<<"Enter your review :";
            cin.get(text,10,'$');
            cout<<"\n\t\t\tThank you so much for your Review!.\n\n\n";

        }

        else if(rev=='N' || rev=='n')
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t\t\tYou have Skill Issue :)\n\n\n\n";

        }

    }

        // 5 build
		else if (budget <= 199999 && budget >=100000)
	{
	    setColor(6);
        cout<<endl;
        cout <<"---------------------------------------------------------"<<endl;
	    cout <<"|COMPONENTS    |        MODEL             |   PRICE     |      "<<endl;
	    cout <<"|--------------|--------------------------|-------------|"<<endl;
        cout <<"|CPU           |" << cpu5.name << "\t  |Rs :" << cpu5.price << "\t|\n";
        cout <<"|RAM           |" << ram5.name << "\t  |Rs :" << ram5.price << " \t|\n";
        cout <<"|GPU           |" << gpu5.name << "\t  |Rs :" << gpu5.price << "\t|\n";
        cout <<"|Storage       |" << storage5.name <<"\t\t  |Rs :" << storage5.price << "\t|\n";
        cout <<"|Motherboard   |" << motherboard5.name <<"\t\t  |Rs :" << motherboard5.price << "\t|\n";
        cout <<"|PSU           |" << psu5.name << "\t  |Rs :" << psu5.price << "\t|\n";
        cout <<"|Case          |" << case5.name << "\t  |Rs :" << case5.price << "\t|\n";
        cout <<"|Cooling       |" << cooling5.name <<"\t\t  |Rs :" << cooling5.price << "\t|\n";
        cout << "---------------------------------------------------------"<<endl;

        int total = cpu5.price + ram5.price +  gpu5.price + storage5.price + motherboard5.price + psu5.price + case5.price + cooling5.price;
        cout << "\t\tTotal price:" << total << "\n\n\n\n\n";

        setColor(7);
        cout<<"Would you like to check more builds ?"<<endl;
        cout<<"Press Y for YES and N for NO (Y/N):";
        cin>>more;

        if(more=='Y' || more=='y')
        {
            goto c;
        }

        else if(more=='N' || more=='n')
        {
            cout<<endl;

        }


        cout<<"We would like to have your review about the build we suggested."<<endl;
        cout<<"Press Y to give a review and N to skip. (Y/N):";
        cin>>rev;

        if(rev=='Y' || rev=='y')
        {
            cout<<endl;
            cout<<"Enter your review :";
            cin.get(text,10,'$');
            cout<<"\n\t\t\tThank you so much for your Review!.\n\n\n";

        }

        else if(rev=='N' || rev=='n')
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t\t\tYou have Skill Issue :)\n\n\n\n";

        }

    }

        // 6 build
		else if (budget <= 99999 && budget >=65000)
	{
	    setColor(6);
        cout<<endl;
        cout <<"---------------------------------------------------------"<<endl;
	    cout <<"|COMPONENTS    |        MODEL             |   PRICE     |      "<<endl;
	    cout <<"|--------------|--------------------------|-------------|"<<endl;
        cout <<"|CPU           |" << cpu6.name << "\t\t  |Rs :" << cpu6.price << "\t|\n";
        cout <<"|RAM           |" << ram6.name << "\t  |Rs :" << ram6.price << " \t|\n";
        cout <<"|GPU           |" << gpu6.name << "\t\t  |Rs :" << gpu6.price << "\t|\n";
        cout <<"|Storage       |" << storage6.name <<"\t\t  |Rs :" << storage6.price << "\t|\n";
        cout <<"|Motherboard   |" << motherboard6.name <<"\t\t  |Rs :" << motherboard6.price << "\t|\n";
        cout <<"|PSU           |" << psu6.name << "\t  |Rs :" << psu6.price << "\t|\n";
        cout <<"|Case          |" << case6.name << "\t  |Rs :" << case6.price << "\t|\n";
        cout <<"|Cooling       |" << cooling6.name <<"\t\t  |Rs :" << cooling6.price << "\t|\n";
        cout << "---------------------------------------------------------"<<endl;

        int total = cpu6.price + ram6.price + gpu6.price + storage6.price + motherboard6.price + psu6.price + case6.price + cooling6.price;
        cout << "\t\tTotal price:" << total << "\n\n\n\n\n";

        setColor(7);
        cout<<"Would you like to check more builds ?"<<endl;
        cout<<"Press Y for YES and N for NO (Y/N):";
        cin>>more;

        if(more=='Y' || more=='y')
        {
            goto c;
        }

        else if(more=='N' || more=='n')
        {
            cout<<endl;

        }


        cout<<"We would like to have your review about the build we suggested."<<endl;
        cout<<"Press Y to give a review and N to skip. (Y/N):";
        cin>>rev;

        if(rev=='Y' || rev=='y')
        {
            cout<<endl;
            cout<<"Enter your review :";
            cin.get(text,10,'$');
            cout<<"\n\t\t\tThank you so much for your Review!.\n\n\n";

        }

        else if(rev=='N' || rev=='n')
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t\t\tYou have Skill Issue :)\n\n\n\n";

        }

    }

        // 7 build
		else if (budget <= 64999 && budget >=35000)
	{
	    setColor(6);
        cout<<endl;
        cout <<"---------------------------------------------------------"<<endl;
	    cout <<"|COMPONENTS    |        MODEL             |   PRICE     |      "<<endl;
	    cout <<"|--------------|--------------------------|-------------|"<<endl;
        cout <<"|CPU           |" << cpu7.name << "\t\t  |Rs :" << cpu7.price << "\t|\n";
        cout <<"|RAM           |" << ram7.name << "\t  |Rs :" << ram7.price << " \t|\n";
        cout <<"|GPU           |" << gpu7.name << "\t\t  |Rs :" << gpu7.price << "\t|\n";
        cout <<"|Storage       |" << storage7.name <<"\t\t  |Rs :" << storage7.price << "\t|\n";
        cout <<"|Motherboard   |" << motherboard7.name <<"\t\t  |Rs :" << motherboard7.price << "\t|\n";
        cout <<"|PSU           |" << psu7.name << "\t  |Rs :" << psu7.price << "\t|\n";
        cout <<"|Case          |" << case7.name << "\t  |Rs :" << case7.price << "\t|\n";
        cout <<"|Cooling       |" << cooling7.name <<"\t\t  |Rs :" << cooling7.price << "\t|\n";
        cout << "---------------------------------------------------------"<<endl;

        int total = cpu7.price + ram7.price + gpu7.price + storage6.price + motherboard7.price + psu7.price + case7.price + cooling7.price;
        cout << "\t\tTotal price:" << total << "\n\n\n\n\n";

        setColor(7);
        cout<<"Would you like to check more builds ?"<<endl;
        cout<<"Press Y for YES and N for NO (Y/N):";
        cin>>more;

        if(more=='Y' || more=='y')
        {
            goto c;
        }

        else if(more=='N' || more=='n')
        {
            cout<<endl;

        }


        cout<<"We would like to have your review about the build we suggested."<<endl;
        cout<<"Press Y to give a review and N to skip. (Y/N):";
        cin>>rev;

        if(rev=='Y' || rev=='y')
        {
            cout<<endl;
            cout<<"Enter your review :";
            cin.get(text,10,'$');
            cout<<"\n\t\t\tThank you so much for your Review!.\n\n\n";

        }

        else if(rev=='N' || rev=='n')
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t\t\tYou have Skill Issue :)\n\n\n\n";

        }

    }

        // 8 build
		else if (budget <= 34999 && budget >=20000)
	{
	    setColor(6);
        cout<<endl;
        cout <<"---------------------------------------------------------"<<endl;
	    cout <<"|COMPONENTS    |        MODEL             |   PRICE     |      "<<endl;
	    cout <<"|--------------|--------------------------|-------------|"<<endl;
        cout <<"|CPU           |" << cpu8.name << "\t\t  |Rs :" << cpu8.price << "\t|\n";
        cout <<"|RAM           |" << ram8.name << "\t  |Rs :" << ram8.price << " \t|\n";
        cout <<"|GPU           |" << gpu8.name << "\t  |Rs :" << gpu8.price << "\t|\n";
        cout <<"|Storage       |" << storage8.name <<"\t\t  |Rs :" << storage8.price << "\t|\n";
        cout <<"|Motherboard   |" << motherboard8.name <<"\t\t\t  |Rs :" << motherboard8.price << "\t|\n";
        cout <<"|PSU           |" << psu8.name << "\t\t  |Rs :" << psu8.price << "\t|\n";
        cout <<"|Case          |" << case8.name << "\t  |Rs :" << case8.price << "\t|\n";
        cout <<"|Cooling       |" << cooling8.name <<"\t\t  |Rs :" << cooling8.price << "\t|\n";
        cout << "---------------------------------------------------------"<<endl;

        int total = cpu8.price + ram8.price + gpu8.price + storage8.price + motherboard8.price + psu8.price + case8.price + cooling8.price;
       cout << "\t\tTotal price:" << total << "\n\n\n\n\n";

       setColor(7);
       cout<<"Would you like to check more builds ?"<<endl;
        cout<<"Press Y for YES and N for NO (Y/N):";
        cin>>more;

        if(more=='Y' || more=='y')
        {
            goto c;
        }

        else if(more=='N' || more=='n')
        {
            cout<<endl;

        }


        cout<<"We would like to have your review about the build we suggested."<<endl;
        cout<<"Press Y to give a review and N to skip. (Y/N):";
        cin>>rev;

        if(rev=='Y' || rev=='y')
        {
            cout<<endl;
            cout<<"Enter your review :";
            cin.get(text,10,'$');
            cout<<"\n\t\t\tThank you so much for your Review!.\n\n\n";

        }

        else if(rev=='N' || rev=='n')
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t\t\tYou have Skill Issue :)\n\n\n\n";

        }

    }

        // 10 build
		else if (budget <= 19999 && budget >=10000)
	{
	    setColor(6);
	    cout<<endl;
        cout <<"---------------------------------------------------------"<<endl;
	    cout <<"|COMPONENTS    |        MODEL             |   PRICE     |      "<<endl;
	    cout <<"|--------------|--------------------------|-------------|"<<endl;
        cout <<"|CPU           |" << cpu10.name << "\t\t\t  |Rs :" << cpu10.price << "\t|\n";
        cout <<"|RAM           |" << ram10.name << "\t  |Rs :" << ram10.price << " \t|\n";
        cout <<"|GPU           |" << gpu10.name << "\t\t  |Rs :" << gpu10.price << "\t|\n";
        cout <<"|Storage       |" << storage10.name <<"\t\t  |Rs :" << storage10.price << "\t|\n";
        cout <<"|Motherboard   |" << motherboard10.name <<"\t\t  |Rs :" << motherboard10.price << "\t|\n";
        cout <<"|PSU           |" << psu10.name << "\t\t  |Rs :" << psu10.price << "\t|\n";
        cout <<"|Case          |" << case10.name << "\t  |Rs :" << case10.price << "\t|\n";
        cout <<"|Cooling       |" << cooling10.name <<"\t\t  |Rs :" << cooling10.price << "\t|\n";
        cout << "---------------------------------------------------------"<<endl;

        int total = cpu10.price + ram10.price + gpu10.price + storage10.price + motherboard10.price + psu10.price + case10.price + cooling10.price;
        cout << "\t\tTotal price:" << total << "\n\n\n\n\n";

        setColor(7);
        cout<<"Would you like to check more builds ?"<<endl;
        cout<<"Press Y for YES and N for NO (Y/N):";
        cin>>more;

        if(more=='Y' || more=='y')
        {
            goto c;
        }

        else if(more=='N' || more=='n')
        {
            cout<<endl;

        }


        cout<<"We would like to have your review about the build we suggested."<<endl;
        cout<<"Press Y to give a review and N to skip. (Y/N):";
        cin>>rev;

        if(rev=='Y' || rev=='y')
        {
            cout<<endl;
            cout<<"Enter your review :";
            cin.get(text,10,'$');
            cout<<"\n\t\t\tThank you so much for your Review!.\n\n\n";

        }

        else if(rev=='N' || rev=='n')
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"\t\t\tYou have Skill Issue :)\n\n\n\n";

        }


    }

        //If budget is too low
		else
	{
	    cout<<endl;
        cout << "\n\n\n\n\n\t\t\tYour budget is too low to build a new PC, Consider saving more for better specs.";
        cout<<endl;
        cout<<"\t\t\t\t\t\t\t\telse"<<endl;
        cout<<"\t\t\t\t\t\t\t  Touch some Grass.";
        cout<<"\n\n\n\n\n\n\n\n\n\n";
    }
	}

void typeWithDelay(const string text, int delayMilliseconds) {
    for (char c : text) {
        cout << c;
        Sleep(delayMilliseconds);

    }
    cout << endl;
}

int main()
{

    int budget,choice,select;
    string enteredID,enteredPassword,userID,password;
    a:
    system("CLS");
        setColor(6);
        cout <<"\t  /  \\    /  \\ ____ |  | ____  ____    _____   ____ \n";
        cout <<"\t  \\   \\/\\/   // __ \\|  |/ ___\\/  _ \\  /     \\ / __ \\\n";
        cout <<"\t   \\        /|  ___/|  |  \\__(  <_> )|  Y Y  | ___ /  \n";
        cout <<"\t    \\__/\\__/  \\____\\|__|\\_____>____/ |__|_|__|\\____\\\n";
        cout <<" ----------------------------------------------------------------- "<< endl;
        cout << "\t		  !MIB COMPUTERS!	" << endl << endl;

        setColor(7);

        cout << "1. Sign up " << endl;
        cout << "2. Login" << endl;
        cout << "3. All Components" << endl;
        cout << "4. About" << endl;
        cout << "5. Exit" << endl << endl;
        cout << "Please enter 1 to Sign up , 2 to Login , 3 to Components , 4 to About and 5 to Exit"<<endl;
        cout << "Enter the Number of your choice :";
        cin >> choice;

	while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 )
    {
        cout << "\nInvalid number. Please try again!" << endl;
        cout << "\nPlease enter 1 to Sign up , 2 to Login , 3 to Components , 4 to About and 5 to Exit";
        cout << "Enter the Number of your choice :";
		cin >> choice;
	}

    if (choice == 1)
    {

        cout << "\nCreate a new ID: ";
        cin>>userID;

        cout << "\nCreate a new password: ";
        cin>>password;

        cout<<"\n\t\t\t\t\tSIGNING UP ";

        for(int a=1;a<15;a++)
        {
            Sleep(150);
            cout << ".";
        }
        cout<<endl;
        cout<<"\n\t\t\t\t\tSIGNING IN SUCCESSFULL :)"<<endl;
        cout<<"\n\t\t\t\t\t";
        system("pause");
        system("cls");
        goto a;
    }

    else if(choice == 2)
    {
    b:
        cout << "\nTo login, please enter your ID and password." << endl;
        cout<<endl;

        cout << "Enter your ID: ";
        cin>>enteredID;

        cout << "\nEnter your password: ";
        cin>>enteredPassword;


    if (enteredID == userID && enteredPassword == password)
    {
        cout<<"\n\t\t\t\t\tLOGGING IN ";

        for(int a=1;a<15;a++)
        {
            Sleep(150);
            cout << ".";
        }
        cout<<endl;
        cout<<"\n\t\t\t\t\tLOGIN SUCCESSFULL :)"<<endl;
        cout<<"\n\t\t\t\t\t";
        system("pause");
    }

    else
    {
        cout << "\nInvalid ID or password. (Try Again)" << endl;
        goto b;
    }

        recommendPC(budget);
    }

    else if (choice == 3)
    {
   d:
    system("cls");
    setColor(6);
        cout <<"\t  /  \\    /  \\ ____ |  | ____  ____    _____   ____ \n";
        cout <<"\t  \\   \\/\\/   // __ \\|  |/ ___\\/  _ \\  /     \\ / __ \\\n";
        cout <<"\t   \\        /|  ___/|  |  \\__(  <_> )|  Y Y  | ___ /  \n";
        cout <<"\t    \\__/\\__/  \\____\\|__|\\_____>____/ |__|_|__|\\____\\\n";
        cout <<" ----------------------------------------------------------------- "<< endl;
        cout << "\t		  !MIB COMPUTERS!	" << endl << endl;
    setColor(7);

    cout<<"1. CPU"<<endl;
    cout<<"2. RAM"<<endl;
    cout<<"3. GPU"<<endl;
    cout<<"4. STORAGE"<<endl;
    cout<<"5. MOTHER BOARD"<<endl;
    cout<<"6. POWER SUPPLY"<<endl;
    cout<<"7. CASE"<<endl;
    cout<<"8. COOLING"<<endl<<endl;

    cout<<"Enter the Number of your choice :";
    cin>>select;

	while (select != 1 && select  != 2 && select  != 3 && select  != 4 && select  != 5 && select  != 6 && select  != 7 && select  != 8 )
    {
        cout << "\nInvalid number. Please try again!" << endl;
        cout << "Enter the Number of your choice :";
		cin >> select;
	}
    switch(select)

{


    case 1:
    cout<<endl<<endl;
    setColor(6);
    cout<<" ---------------------------------------"<<endl;
    cout<<" |\t\t  CPU                  |"<<endl;
    cout<<" --------------------------------------"<< endl;
    cout<<" | AMD Ryzen 7 9800x3D   - Rs. 205,000 |"<<endl;
    cout<<" | Intel I9 14900k       - Rs. 150,000 |"<<endl;
    cout<<" | Intel i7 14900K       - Rs. 120,000 |"<<endl;
    cout<<" | AMD Ryzen 7 7800x3d   - Rs. 120,000 |"<<endl;
    cout<<" | Intel i5 12400f       - Rs. 30,000  |"<<endl;
    cout<<" | AMD Ryzen 5 3600      - Rs. 18,000  |"<<endl;
    cout<<" | Intel i7 4790         - Rs. 12,000  |"<<endl;
    cout<<" | Intel i7 3770         - Rs. 6,000   |"<<endl;
    cout<<" | Intel i5 3570         - Rs. 3,000   |"<<endl;
    cout<<" | Intel i3 3220         - Rs. 2,000   |"<<endl;
    cout<<" ---------------------------------------\n\n\n"<< endl;
    setColor(7);

        cout<<"Would you like to go to the Main Menu or go back to the All Components ?"<<endl;
        cout<<"Press M for Main Menu and A for All Components (M/A):";
        cin>>more;

    while (more != 'A' && more != 'a' && more != 'M' && more != 'm' )
    {
        cout << "\nInvalid Character. Please try again!" << endl;
        cout << "Enter the Character of your choice :";
		cin >> more;
	}

        if(more=='M' || more=='m')
        {
            goto a;
        }

        else if(more=='A' || more=='a')
        {
            goto d;

        }
    break;

    case 2:
    cout<<endl<<endl;
    setColor(6);
    cout<<" -------------------------------------"<<endl;
    cout<<" |\t\tRAM                  |"<<endl;
    cout<<" ------------------------------------"<< endl;
    cout<<" | 128GB DDR5 6800MHz   - Rs. 80,000 |"<<endl;
    cout<<" | 64GB DDR5 5600MHz    - Rs. 50,000 |"<<endl;
    cout<<" | 32GB DDR4 4800MHz    - Rs. 38,000 |"<<endl;
    cout<<" | 32GB DDR4 3200MHz    - Rs. 25,000 |"<<endl;
    cout<<" | 16GB DDR4 200MHz     - Rs. 8,000  |"<<endl;
    cout<<" | 16GB DDR3 1600MHz    - Rs. 4,000  |"<<endl;
    cout<<" | 8GB DDR3 1600MHz     - Rs. 2,000  |"<<endl;
    cout <<"-------------------------------------\n\n\n"<< endl;
    setColor(7);

        cout<<"Would you like to go to the Main Menu or go back to the All Components ?"<<endl;
        cout<<"Press M for Main Menu and A for All Components (M/A):";
        cin>>more;

    while (more != 'A' && more != 'a' && more != 'M' && more != 'm' )
    {
        cout << "\nInvalid Character. Please try again!" << endl;
        cout << "Enter the Character of your choice :";
		cin >> more;
	}

        if(more=='M' || more=='m')
        {
            goto a;
        }

        else if(more=='A' || more=='a')
        {
            goto d;

        }
    break;

    case 3:
    cout<<endl<<endl;
    setColor(6);
    cout<<" --------------------------------------"<<endl;
    cout<<" |                 GPU                |"<<endl;
    cout<<" --------------------------------------"<< endl;
    cout<<" | NVIDIA RTX 5090      - Rs. 550,000 |"<<endl;
    cout<<" | NVIDIA RTX 4090      - Rs. 240,000 |"<<endl;
    cout<<" | MSI RTX 4080 Super   - Rs. 225,000 |"<<endl;
    cout<<" | NVIDIA RTX 4070      - Rs. 180,000 |"<<endl;
    cout<<" | NVIDIA RTX 3060      - Rs. 80,000  |"<<endl;
    cout<<" | NVIDIA GTX 1660S     - Rs. 45,000  |"<<endl;
    cout<<" | AMD RX 580           - Rs. 24,000  |"<<endl;
    cout<<" | AMD RX 470           - Rs. 15,000  |"<<endl;
    cout<<" | NVIDIA GTX 750TI     - Rs. 12,000  |"<<endl;
    cout<<" --------------------------------------\n\n\n"<< endl;
    setColor(7);

        cout<<"Would you like to go to the Main Menu or go back to the All Components ?"<<endl;
        cout<<"Press M for Main Menu and A for All Components (M/A):";
        cin>>more;

    while (more != 'A' && more != 'a' && more != 'M' && more != 'm' )
    {
        cout << "\nInvalid Character. Please try again!" << endl;
        cout << "Enter the Character of your choice :";
		cin >> more;
	}

        if(more=='M' || more=='m')
        {
            goto a;
        }

        else if(more=='A' || more=='a')
        {
            goto d;

        }
    break;

    case 4:
    cout<<endl<<endl;
    setColor(6);
    cout<<" -------------------------------------"<<endl;
    cout<<" |             STORAGE               |"<<endl;
    cout<<" -------------------------------------"<< endl;
    cout<<" | 4TB NVME             - Rs. 80,000 |"<<endl;
    cout<<" | 3TB NVME             - Rs. 60,000 |"<<endl;
    cout<<" | 2TB NVME             - Rs. 40,000 |"<<endl;
    cout<<" | 1TB NVME             - Rs. 15,000 |"<<endl;
    cout<<" | 512GB SSD            - Rs. 6,000  |"<<endl;
    cout<<" | 256GB SSD            - Rs. 4,000  |"<<endl;
    cout<<" | 500GB HDD            - Rs. 1,500  |"<<endl;
    cout<<" | 250GB HDD            - Rs. 800    |"<<endl;
    cout<<" -------------------------------------\n\n\n"<< endl;
    setColor(7);

        cout<<"Would you like to go to the Main Menu or go back to the All Components ?"<<endl;
        cout<<"Press M for Main Menu and A for All Components (M/A):";
        cin>>more;

    while (more != 'A' && more != 'a' && more != 'M' && more != 'm' )
    {
        cout << "\nInvalid Character. Please try again!" << endl;
        cout << "Enter the Character of your choice :";
		cin >> more;
	}

        if(more=='M' || more=='m')
        {
            goto a;
        }

        else if(more=='A' || more=='a')
        {
            goto d;

        }
    break;

    case 5:
    cout<<endl<<endl;
    setColor(6);
    cout<<" --------------------------------------"<<endl;
    cout<<" |            MOTHERBOARD             |"<<endl;
    cout<<" --------------------------------------"<< endl;
    cout<<" | Asus Tuff X870       - Rs. 128,000 |"<<endl;
    cout<<" | Asus Tuff Z790-PLUS  - Rs. 180,000 |"<<endl;
    cout<<" | TUF GAMING Z790      - Rs. 96,000  |"<<endl;
    cout<<" | Asus Tuff X670       - Rs. 95,000  |"<<endl;
    cout<<" | MSI H610             - Rs. 25,000  |"<<endl;
    cout<<" | Aorus B450           - Rs. 20,000  |"<<endl;
    cout<<" | Gigabyte h81         - Rs. 6,000   |"<<endl;
    cout<<" | Gigabyte h61         - Rs. 4,500   |"<<endl;
    cout<<" | Intel DQ77MK         - Rs. 2,500   |"<<endl;
    cout<<" --------------------------------------\n\n\n"<< endl;
    setColor(7);

        cout<<"Would you like to go to the Main Menu or go back to the All Components ?"<<endl;
        cout<<"Press M for Main Menu and A for All Components (M/A):";
        cin>>more;

    while (more != 'A' && more != 'a' && more != 'M' && more != 'm' )
    {
        cout << "\nInvalid Character. Please try again!" << endl;
        cout << "Enter the Character of your choice :";
		cin >> more;
	}

        if(more=='M' || more=='m')
        {
            goto a;
        }

        else if(more=='A' || more=='a')
        {
            goto d;

        }
    break;

    case 6:
    cout<<endl<<endl;
    setColor(6);
    cout<<" -----------------------------------------"<<endl;
    cout<<" |             POWER-SUPPLY              |"<<endl;
    cout<<" -----------------------------------------"<< endl;
    cout<<" | XPG 1200W PSU            - Rs. 55,000 |"<<endl;
    cout<<" | CoolerMaster 1200W PSU   - Rs. 50,000 |"<<endl;
    cout<<" | EVGA 850W PSU            - Rs. 47,000 |"<<endl;
    cout<<" | Corsair 650W PSU         - Rs. 18,000 |"<<endl;
    cout<<" | Silver Stone 550W PSU    - Rs. 14,000 |"<<endl;
    cout<<" | Seasonic 450W PSU        - Rs. 5,000  |"<<endl;
    cout<<" | HP 350W PSU              - Rs. 2,500  |"<<endl;
    cout<<" | DELL 250W PSU            - Rs. 1,500  |"<<endl;
    cout<<" -----------------------------------------\n\n\n"<< endl;
    setColor(7);

        cout<<"Would you like to go to the Main Menu or go back to the All Components ?"<<endl;
        cout<<"Press M for Main Menu and A for All Components (M/A):";
        cin>>more;

    while (more != 'A' && more != 'a' && more != 'M' && more != 'm' )
    {
        cout << "\nInvalid Character. Please try again!" << endl;
        cout << "Enter the Character of your choice :";
		cin >> more;
	}

        if(more=='M' || more=='m')
        {
            goto a;
        }

        else if(more=='A' || more=='a')
        {
            goto d;

        }
    break;

    case 7:
    cout<<endl<<endl;
    setColor(6);
    cout<<" ---------------------------------------------"<<endl;
    cout<<"                   CASING                    |"<<endl;
    cout<<" ---------------------------------------------"<< endl;
    cout<<" | Lian Li FishTank LI011 Case  - Rs. 35,000 |"<<endl;
    cout<<" | Lian Li FishTank LI010 Case  - Rs. 30,000 |"<<endl;
    cout<<" | Lian Li Fish Tank LI08 Case  - Rs. 28,000 |"<<endl;
    cout<<" | NZXT H7 Case                 - Rs. 20,000 |"<<endl;
    cout<<" | Corsair 3000D Case           - Rs. 15,000 |"<<endl;
    cout<<" | COUGAR MX120 Case            - Rs. 10,000 |"<<endl;
    cout<<" | Standard Tower Case          - Rs. 1,500  |"<<endl;
    cout<<" | Standard Tower Case          - Rs. 1,000  |"<<endl;
    cout<<" ---------------------------------------------\n\n\n"<< endl;
    setColor(7);

        cout<<"Would you like to go to the Main Menu or go back to the All Components ?"<<endl;
        cout<<"Press M for Main Menu and A for All Components (M/A):";
        cin>>more;

    while (more != 'A' && more != 'a' && more != 'M' && more != 'm' )
    {
        cout << "\nInvalid Character. Please try again!" << endl;
        cout << "Enter the Character of your choice :";
		cin >> more;
	}

        if(more=='M' || more=='m')
        {
            goto a;
        }

        else if(more=='A' || more=='a')
        {
            goto d;

        }
    break;

    case 8:
    cout<<endl<<endl;
    setColor(6);
    cout<<" --------------------------------"<<endl;
    cout<<" |              COOLING         |"<<endl;
    cout<<" --------------------------------"<< endl;
    cout<<" | Liquid Cooler   - Rs. 25,000 |"<<endl;
    cout<<" | Liquid Cooler   - Rs. 22,000 |"<<endl;
    cout<<" | Liquid Cooler   - Rs. 20,000 |"<<endl;
    cout<<" | Liquid Cooler   - Rs. 15,000 |"<<endl;
    cout<<" | AIR Cooler      - Rs. 8,000  |"<<endl;
    cout<<" | AIR Cooler      - Rs. 2,500  |"<<endl;
    cout<<" | STOCK Cooler    - Rs. 500    |"<<endl;
    cout<<" --------------------------------\n\n\n"<< endl;
    setColor(7);

        cout<<"Would you like to go to the Main Menu or go back to the All Components ?"<<endl;
        cout<<"Press M for Main Menu and A for All Components (M/A):";
        cin>>more;

    while (more != 'A' && more != 'a' && more != 'M' && more != 'm' )
    {
        cout << "\nInvalid Character. Please try again!" << endl;
        cout << "Enter the Character of your choice :";
		cin >> more;
	}

        if(more=='M' || more=='m')
        {
            goto a;
        }

        else if(more=='A' || more=='a')
        {
            goto d;

        }
    break;
    }

}

    else if (choice == 4 )
    {
        cout<<endl;
        cout<<"\t\t\t\t\t\t\tCreated by:"<<endl;
        cout<<"\t\t\t\t\t\t\tMuzammil Ansari"<<endl;
        cout<<"\t\t\t\t\t\t\tSyed Bilal Ali"<<endl;
        cout<<"\t\t\t\t\t\t\tSyed Muhammad Ibrahim Ali"<<endl;
        cout<<"\n\n\n";


    string paragraph =
        "Welcome to MIB Computers! We are excited to help you build your dream PC. "
        "Whether you are a gamer, a content creator, or just looking for a reliable machine, "
        "we have the right components for you. Our team is dedicated to providing you with the best service "
        "and support. Let's get started on your journey to a powerful and efficient computer system!\n"
        "\nAt MIB Computers, we pride ourselves on offering:\n"
        "\nPremium Components:\nFrom the latest CPUs and GPUs to cutting-edge cooling solutions"
        "we provide only the best hardware to ensure your system stands the test of time."
        "\n\nCustomization: \nYour PC should reflect your goals and preferences. We will work with"
        "you to design a setup that matches your specific requirements, style, and budget."
        "\n\nExpert Guidance:\nOur knowledgeable team is here to provide recommendations to"
        "to�from selecting parts to assembling the final build."
        "\n\nUnmatched Support:\nWe are not here to sell you components; we are here to support you"
        "every step to provide recommendations to from selecting parts to assembling the build.\n"
        "\n\nLets begin your journey to building a powerful, efficient, and uniquely you computer system "
        "Whether you know exactly what you are looking for or need a bit of guidance, we are here to help"
        "\n\n\n\t\t\t\tYour dream PC is just a few steps away lets get started!";

    int delay = 10;

    typeWithDelay(paragraph, delay);
    cout<<endl<<endl;
    cout<<"Press any key to go to the main menu";
    getch();
    goto a;

    }


    else if (choice == 5)
    {
    cout<<endl;
    cout << "\n\n\n\t\t\t\t\tThank you! Please come again! \n\n\n\n" << endl;
    }

}

