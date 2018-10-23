#include <stdbool.h>

bool C1 = false, C2 = false, C3 = false;

void R() {};

void foo() {
	if (C1) {
		goto out;
	}
	if (C2) {

	} else {

	}
	if (C3) {

	} else {
		out: R();
	}
}
