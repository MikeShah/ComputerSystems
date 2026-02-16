// @file: live.d
// dmd -preview=dip1021 live.d -of=prog
import std.stdio;
import core.stdc.stdlib;

// Allocate Resource (memory in this case) 
int* allocate() @nogc{
    int* integers = cast(int*)malloc(int.sizeof*5);
    return integers;
}
// Release resource
void release(int* p) @nogc{
    free(p);
}
// Test function
@live void test() @nogc{
//    auto p = allocate();
//         p = allocate();
    int* p = void;
    // ... other steps
    p = allocate();
    release(p);
}

void main(){
    test();

}
