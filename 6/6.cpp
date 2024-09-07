#include <iostream>
#include <string>
using namespace std;

class CPU {
public:
    string model;
    float frequency;
    CPU(string model, float frequency) : model(model), frequency(frequency) {}
};

class GPU {
public:
    string model;
    int memory;
    GPU(string model, int memory) : model(model), memory(memory) {}
};

class RAM {
public:
    int capacity;
    RAM(int capacity) : capacity(capacity) {}
};

class Screen {
public:
    float size;
    string resolution;
    Screen(float size, string resolution) : size(size), resolution(resolution) {}
};


class Storage {
public:
    string type;
    int capacity;
    Storage(string type, int capacity) : type(type), capacity(capacity) {}
};

class Keyboard {
public:
    string layout;
    Keyboard(string layout) : layout(layout) {}
};

class Battery {
public:
    int capacity;
    Battery(int capacity) : capacity(capacity) {}
};

class Laptop {
public:
    CPU cpu;
    GPU gpu;
    RAM ram;
    Screen screen;
    Storage storage;
    Keyboard keyboard;
    Battery battery;


    Laptop(Screen screen, CPU cpu, RAM ram, Storage storage,
        Keyboard keyboard, Battery battery, GPU gpu)
        : screen(screen), cpu(cpu), ram(ram), storage(storage),
        keyboard(keyboard), battery(battery), gpu(gpu) {};
};

int main() {
    Screen screen(15.6, "1920x1080");
    CPU cpu("Intel i5-12400F", 2.4);
    RAM ram(8);
    Storage storage("SSD", 256);
    Keyboard keyboard("ENG");
    Battery battery(5000);
    GPU gpu("Intel Iris Xe", 2);
    Laptop laptop(screen, cpu, ram, storage, keyboard, battery, gpu);

    cout << "Monitor" << laptop.screen.size << "разрешение: " << laptop.screen.resolution;
    cout << "CPU:" << laptop.cpu.model << ", " << laptop.cpu.frequency << " GHZ";
    cout << "RAM:" << laptop.ram.capacity << "GB" << endl;
    cout << "Storage:" << laptop.storage.type << "на" << laptop.storage.capacity << " GB";
    cout << "Keyboard:" << laptop.keyboard.layout << endl;
    cout << "Battery" << laptop.battery.capacity << "MA" << endl;
    cout << "GPU:" << laptop.gpu.model << "с" << laptop.gpu.memory << " GB";
    return 0;
}
