Polymorphism
- single interface(public method) multiple methods
- single name multi implementations


e.g 
 AirPlane
befor fly AirPlane should be test properly


class AirPlane{
public:
 virtual void engine()=0;
 virtual void landingGear()=0;
 virtual void wings()=0;
};  
class Boeing777:public AirPlane{
public:
void engine(){cout<<"Boeing777 engine start"<<endl;}
void landingGear()
{cout<<"Boeing777 landingear tested"<<endl; }
 void wings()
{cout<<"Boeing777 wings tested"<<endl;}
};
class AirBus:public AirPlane{
public:
void engine(){cout<<"AirBus engine start"<<endl;}
void landingGear()
{cout<<"AirBus landingear tested"<<endl; }
 void wings()
{cout<<"AirBus wings tested"<<endl;}

};

bool testingPlane(AirPlane *a){
a->engine();//polymorphic call
a->landingGear();
a->wings();
return true;
}


void main() {
AirBus air;
testingPlane(&air);
Boeing777 boeing;
testingPlane(&boeing);
}

..................................................
e.g Remote Control (Generic)

Single remote control can used to start TV as well as Ac.
Also this remote can be used to stop both (Tv & AC)

class RemoteControl{
public:
virtual void start()=0;
virtual void stop()=0;
};
class TV:public RemoteControl{
public:
 void start(){cout<<"TV start"<<endl;}
void stop(){cout<<"TV stop"<<endl;}
};
class AC:public RemoteControl{
public:
 void start(){cout<<"AC start"<<endl;}
void stop(){cout<<"AC stop"<<endl;}
};

void main () {
TV tv;
AC ac;
RemoteControl *rc;
rc=&tv;
rc->start();
rc=&ac;
rc->start();
}

................................................






