#ifndef CONSTANT_H_
#define CONSTANT_H_

#define TIMESTEP 1e-3
#define HARDENING 5.0f
#define GRAVITY -9.8f
#define CRIT_COMPRESS (1 - 1.9e-2)
#define CRIT_STRETCH (1 + 7.5e-3)
#define ALPHA 0.95f
#define PARTICLE_DIAM 0.01f
#define STICKY_WALL 0.9f
#define FRICTION 1.0f

#define YOUNG 4.8e4f
#define POISSON 0.2f

#define LAMBDA ((POISSON * YOUNG)) / ((1.0f + POISSON) * (1.0f - 2.0f * POISSON))
#define MU (YOUNG / (2.0f * (1.0f + POISSON)))

#define GRID_BOUND_X 100
#define GRID_BOUND_Y 100
#define GRID_BOUND_Z 100

#define BOX_BOUNDARY_1 ((0 + 5) * PARTICLE_DIAM)
#define BOX_BOUNDARY_2 ((GRID_BOUND_X - 5) * PARTICLE_DIAM)

#endif  // CONSTANT_H_
