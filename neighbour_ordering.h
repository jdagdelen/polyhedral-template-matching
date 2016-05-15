#ifndef NEIGHBOUR_ORDERING_H
#define NEIGHBOUR_ORDERING_H


#ifdef __cplusplus
extern "C" {
#endif

typedef struct ptm_local_handle* ptm_local_handle_t;

int calculate_neighbour_ordering(ptm_local_handle_t, int num_points, const double (*_points)[3], int8_t* ordering);

void* ptm_initialize_local();
void ptm_uninitialize_local(ptm_local_handle_t ptr);

#ifdef __cplusplus
}
#endif

#endif

