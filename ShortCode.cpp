#include <iostream>

class shortWindow{
private:
	bool running;
public:
	shortWindow(){
		running = true;
	}
	void start(){
		running = true;
	}
	void pause(){
		running = false;
	}
};
class longWindow{
private:
	bool running;
public:
	longWindow(){
		running = true;
	}
	void start(){
		if(running == false){
			running = true;
		}else{
			return;
		}
	}
	void pause(){
		if(running == true){
			running = false;
		}else{
			return;
		}
	}
};