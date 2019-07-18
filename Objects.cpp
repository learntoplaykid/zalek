#include "Objects.h"

Champion* Me() {
	return (Champion*)* (DWORD*) (baseAddr + LOCAL_PLAYER);
}
