#include <iostream>
#include <thread>
#include <chrono>
#include "toggle.h"

using namespace std::chrono_literals;

int main()
{
  auto toggle = core::Toggle{};
  auto status = toggle.setHdrMode(true);
  if (!status.IsSuccessful)
  {
    auto msg = "Error setting hdr mode: " + status.Message;
    std::cout << msg.c_str() << std::endl;
  }
  for (;;)
  {
    std::this_thread::sleep_for(1000ms);
  }
}