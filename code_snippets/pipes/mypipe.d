import std.stdio, std.process;
void main(){
  RunProcess("./infinite",["ls",`echo "hello"`,"exit"]);
  RunProcesses("./infinite",["ls",`echo "hello"`,"exit"]);
}

void RunProcesses(string processName, string[] args){
  auto p= pipeProcess("./infinite", Redirect.stdin);
  scope(exit) wait(p.pid);

  foreach(arg ; args){
    p.stdin.writeln(arg);
    p.stdin.flush();
  }
  p.stdin.close();

}


void RunProcess(string processName, string[] args){
  auto p= pipe();

  auto pid = spawnProcess("./infinite",p.readEnd,stdout);
  scope(exit) wait(pid);

  p.readEnd.close();
  foreach(arg ; args){
    p.writeEnd.writeln(arg);
    p.writeEnd.flush();
  //  auto pid2 = spawnProcess(arg);
  }
  p.writeEnd.close();

  if(wait(pid)!=0)
  {
    writeln("Something broke");
  }
}
