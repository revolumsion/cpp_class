#include"analyzer.hxx"

int main()
{
    particle a(1,1,2,2);
    particle b(2,3,2,3);
    particle c(3, 5, 1, 4);

    simulation s;

    s.add_particle(a.x, a.y, a.vx, a.vy);
    s.add_particle(b.x, b.y, b.vx, b.vy);
    s.add_particle(c.x, c.y, c.vx, c.vy);

    
    
    analyzer l;
    l.all_out(s.getParticlesShared());

    s.updateAll(2);

    l.all_out(s.getParticlesShared());

    return 0;

}