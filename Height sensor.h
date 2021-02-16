#ifndef Height sensor_h
#define Height sensor_h

class Controller;

class Height sensor {

 public:

    virtual void SensorHeight();

 public:
    Integer CurrentHeight;

 public:

    /**
     * @element-type Controller
     */
    Controller *myController;
};

#endif // Height sensor_h
