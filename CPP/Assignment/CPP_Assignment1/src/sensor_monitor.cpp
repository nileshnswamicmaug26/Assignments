#include<iostream>

using namespace std;

int main(int argc , char* argv[]){

		cout<<"$ ./";		
		for(int i=0;i<argc;i++){
			cout<<argv[i] <<" ";
		}
		
		cout<<endl;
		
		if(argc<4)
		{
		cout<<"Usage : ./sensor_monitor <warn_threshold> <critical_threshold> <num_readings>"<<endl;
		cout<<"Error : Missing arguments"<<endl;
		return 1;
		}
	
		int warn = atoi(argv[1]);
		int critical = atoi(argv[2]);
		int num_readings = atoi(argv[3]);
	
		if(warn>=critical){
			cout<<"warn thresholdmust be less than critical"<<endl;
			return 1;
		}
		if(num_readings<1||num_readings>500){
			cout<<"Number must between 1 to 500"<<endl;
			return 1;
		}
		cout << "Config  :" << "Warn= "<< warn <<"°C Critical= "<< critical <<"°C Readings= "<<num_readings<<"°C"<<endl;
		
		int normal=0;
		int warning=0;
		int criticalcount=0;
		int readings=0;
		int shutdown=0;
		
		for(int i=0;i<num_readings;i++){
			int temp =rand()%70;
			if(temp<warn){
				normal++;
			}else if(temp<critical){
				warning++;
			}else if(temp<60){
				criticalcount++;
			}else{
				shutdown++;
			}
		}
		cout<<"Results : Normal:"<<normal <<" Warning:"<<warning
		<<" Critical:"<<criticalcount<<" Shutdown:"<<shutdown<<endl;
		return 0;
}
