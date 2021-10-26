class Wheel {
public:
	Wheel();
	void spin();
	int* read();

private:
	int slots[9];
	int internalPtr;
};

// Class declaration for our slot machine.
class Machine {
public:
	enum Image {
		orange = 1,
		watermelon,
		luckyseven,
		lemon,
		bar,
		doublebar,
		triplebar,
		cherry,
		plum
	};

	Machine();
	~Machine();
	void spin();
	void bet(int);
	void insertcoin();
	void insertbill(double);
	void printscreen();


private:
	void loadscreen(int, int*);
	void checkwinnings();
	int checkline(int line[3]);
	int credits;
	int betAmount;
	int screen[3][3];

	Wheel *wheels[3];
};
