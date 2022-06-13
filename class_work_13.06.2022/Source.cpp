#include<iostream>
using namespace std;
class Transport{
public:
	Transport(int speed,int capacity){
		speed_ = speed;
		capacity_ = capacity;
	}
	void set_speed(int speed) {
		speed_ = speed;
	}
	int get_speed() {
		return speed_;
	}
	void set_capacity(int capacity) {
		capacity_ = capacity;
	}
	virtual void skill() {
		cout << "";
	}
private:
	int speed_;
	int capacity_;

};


class Motor_transport:virtual public Transport {
public:
	Motor_transport(int speed, int capacity):Transport(speed, capacity) {}
	
	
};

class Electro_car:public Motor_transport {
public:
	Electro_car(int speed, int capacity) :Motor_transport(speed, capacity),Transport(speed, capacity){}

	void skill()override {
		cout << "Заряжаться!";
	}


};

class DVS_car :public Motor_transport {
public:

	void skill()override {
		cout << "Заправляться!";
	}

};




class Muscle_transport:public Transport {
public:



};

class Scooter:public Muscle_transport {
public:


};
class Bike :public Muscle_transport {
public:


};


class Electro_bike:public Muscle_transport,public Motor_transport {


};








int main() {
	system("chcp 1251>nul");














	system("pause>nul");
	return 0;
}