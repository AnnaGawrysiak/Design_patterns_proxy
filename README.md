# Design_patterns_proxy

Problem:
Greeter() has ability to check for new versions by Updater interface. 
Updater can do costlyoperations during initialization. We cannot change implementation of GreeterUpdater.
Greeter can do nothing until instance of Updater creation is finished, which might take a long time
/ not happen at all. 

Solution:
Create LazyUpdater which manages the lifetime of the object.
LazyUpdate has the same interface as GreeterUpdater, so the client (Greeter) can use it in the same way.
Abstract class Updater has the same interface like GreeterUpdater (virtual Check_for_updates() method).
We delay creation of GreeterUpdater untilit's really needed.
Lazy Updater doesn't have complicated, time-consuming constructor.LazyUpdater performs lazy initialization
of GreeterUpdater object.

Proxy design pattern:
- Proxy has the same interface as its service object, but changes the object's behaviour.
- Proxy has pointer of reference to its service object.
- Proxy manages access to its service object.
- Proxy can manage lifetime of its service object.

Example of use:
- memory management (e.g. smart pointers),
- lazy initialization,
- remote proxy (e.g. representing an object available in different address space),
- protection proxy (e.g. checking permissions for access).
 
