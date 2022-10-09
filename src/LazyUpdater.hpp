#ifndef LAZY
#define LAZY

#include "Updater.hpp"
#include "GreeterUpdater.hpp"
#include <memory>

class LazyUpdater : public Updater
{
public:
   
    virtual void checkForUpdates() override
    {
        greeter_updater = std::make_unique<GreeterUpdater>();
        greeter_updater->checkForUpdates();
    }
private:
    std::unique_ptr<Updater> greeter_updater;
};

#endif