#ifndef EngineController_h
#define EngineController_h

class Controller;
class Engine;

class EngineController {

 public:

    virtual void SetEnginePower();

 public:

    /**
     * @element-type Controller
     */
    Controller *myController;

    /**
     * @element-type Engine
     */
    Engine *myEngine;
};

#endif // EngineController_h
