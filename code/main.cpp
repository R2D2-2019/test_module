#include <iostream>
#include <hwlib.hpp>

int main(void) {
    std::cout << "Arduino blink\n";

    auto led = hwlib::target::pin_out(hwlib::target::pins::d40);

    while (true) {
        led.write(true); // on
        hwlib::wait_ms(500);
        led.write(false); // on
        hwlib::wait_ms(500);
    }

    return 0;
}
