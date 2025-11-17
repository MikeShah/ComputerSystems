// A very simple process shell
import std.stdio;
import std.process;

void main(){

  string input;
  while(input!="exit\n"){
    write("> ");
    input = readln();
    write("\tcommand read:",input);
    auto pid = spawnShell(input);
    wait(pid);
  }
}
