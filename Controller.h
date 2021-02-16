#ifndef Controller_h
#define Controller_h

class Puch;
class Height sensor;
class Engine controller;
class EngineController;

class Controller {

 public:

    virtual void EncreasePower();

    virtual void ReduceEngine();

    virtual void ConstPower();

 public:
    Integer SetHeight;
    Integer CurrentHeight;

 public:

    /**
     * @element-type Puch
     */
    Puch *myPuch;

    /**
     * @element-type Height sensor
     */
    Height sensor *myHeight sensor;

    /**
     * @element-type Engine controller
     */
    Engine controller *myEngine controller;

    /**
     * @element-type EngineController
     */
    EngineController *myEngineController;
};

#endif // Controller_h
