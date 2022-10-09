#include <iostream>
#include <memory>

#include "Greeter.hpp"
#include "GreeterUpdater.hpp"
#include "LazyUpdater.hpp"
#include "Updater.hpp"

int main(){
    std::unique_ptr<Updater> updater = std::make_unique<LazyUpdater>();

    Greeter greeter(std::move(updater));
    greeter.greet();
}
