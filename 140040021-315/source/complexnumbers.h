class Vector2D
{
public :
    double x,y;


public:
    Vector2D()
    {
    }
    Vector2D(double x,double y)
    {
        this->x=x;
        this->y=y;
    };

    double getMagnitude() //for magnitude
    {
        return sqrt(this->x*this->x+this->y*this->y);
    };
    double getAngleX() //for getting angle
    {
        double angle=atan(this->y/this->x);
        if(x>=0 && y>=0)
            return angle*180/PI;
        if(x<0 && y>=0)
            return (PI+angle)*180/PI;
        if(x<0 && y<0)
            return (-1)*(PI/2+angle)*180/PI;
        if(x>0 && y<0)
            return (angle)*180/PI;
    }
    Vector2D add(Vector2D v)
    { //for addition
        Vector2D temp;
        temp.x=this->x+v.x;
        temp.y=this->y+v.y;
        return temp;
    };
    Vector2D substract(Vector2D v)
    { //for subtraction
        Vector2D temp;
        temp.x=this->x-v.x;
        temp.y=this->y-v.y;
        return temp;

    };
    Vector2D multiplication(Vector2D v)
    { //for finding conjugate
        Vector2D temp;
        temp.x=(this->x*v.x)-(this->y)*v.y;
        temp.y=(this->y*v.x)+(this->x)*v.y;
        return temp;

    };
    Vector2D conjugate()
    { //for finding conjugate
        Vector2D temp;
        temp.x=this->x;
        temp.y=(-1)*this->y;
        return temp;

    };
    Vector2D division(Vector2D v)
    { //for division
        Vector2D temp;
        temp.x=((this->x*v.x)+(this->y)*v.y)/(v.x*v.x+v.y*v.y);
        temp.y=((this->y*v.x)-(this->x)*v.y)/(v.x*v.x+v.y*v.y);
        return temp;

    };




};
