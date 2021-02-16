#ifndef Puch_h
#define Puch_h

class Controller;
class Honey;
class Bee;

class Puch {

 public:

    virtual void SetHeight();

    virtual void Land();

    virtual void EmergencyLanding();

    virtual void HoldAltitude();

    virtual void TakeHoney();

    virtual void StartFly();

 public:
    Integer weight;

 public:

    /**
     * @element-type Controller
     */
    Controller *myController;

    /**
     * @element-type Honey
     */
    Honey *myHoney;

    /**
     * @element-type Bee
     */
    Bee *myBee;
};

#endif // Puch_h
