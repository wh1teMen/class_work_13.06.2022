#include<iostream>
using namespace std;
class Transport{
public:
	Transport() {}
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
	int get_capacity() {
		return capacity_;
	}
	virtual void skill() {
		cout << " ";
	}
private:
	int speed_=0;
	int capacity_=0;

};


class Motorized:virtual public Transport {
public:
	Motorized(){}
	Motorized(int speed, int capacity) :Transport(speed, capacity) {}
	
	
	
};

class Electro_car:public Motorized {
public:
	Electro_car(){}
	Electro_car(int speed, int capacity,int energy_intensity) :Motorized(speed, capacity), Transport(speed, capacity) {
		energy_intensity_ = energy_intensity_;

	}
	void set_energy_intensity(int volume) {
		energy_intensity_ = volume;
	}
	int get_energy_intensity() {
		return energy_intensity_;
	}
	void skill()override {
		cout << "заряжаться электричеством!\n";
	}
private:
	int energy_intensity_ = 0;

		

};

class DVS_car :public Motorized {
public:
	DVS_car(){}
	DVS_car(int speed, int capacity, int engine_capacity) :Motorized(speed, capacity), Transport(speed, capacity) {
		engine_capacity_ = engine_capacity;
	}

void set_engine_capacity(int volume) {
	engine_capacity_ = volume;
}
int get_engine_capacity() {
	return engine_capacity_;
}
void skill()override {
	cout << "заряжаться топливом!\n";
}
private:
	//объем двигателя
	int engine_capacity_ = 0;

};

class Muscular:virtual public Transport {
public:
	Muscular(){}
	Muscular(int speed, int capacity) :Transport(speed, capacity) {}
	



};

class Scooter:public Muscular {
public:
	Scooter(){}
	void movement() {
		cout << "Крутить педали";
	}



};
class Bike :public Muscular {
public:
	Bike(){}
	void sound() {
		cout << "Дзынь-Дзынь\n";
	}
	int get_wheels() {
		return wheels;
	}
private:
	 int wheels = 2;
	
};


class Electro_bike:public Bike,public Electro_car {
public:
	Electro_bike(){}
	Electro_bike(int speed, int capacity, int energy_intensity):Electro_car(speed,capacity,energy_intensity),Bike(){}
	
};








int main() {
	system("chcp 1251>nul");
	Electro_bike bike;
	cout << "Метод: "; bike.skill();
	bike.set_speed(30);
	cout << "Скорость: "<< bike.get_speed();
	cout <<"\nВместимость: "<< bike.get_wheels();
	bike.set_energy_intensity(900);
	cout << "\nобъем батареии: "<<bike.get_energy_intensity();
	cout << "\nЗвук:"; bike.sound();
	
	










	system("pause>nul");
	return 0;
}