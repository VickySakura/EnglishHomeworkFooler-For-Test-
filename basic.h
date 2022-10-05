
#ifndef _UINT
#define _UINT unsigned int
#endif

_UINT random( const _UINT SAND ){
	_UINT tmp = SAND;
	tmp = tmp*tmp;
	tmp >>= 2;
	tmp = tmp%114154;
	return tmp;
}
