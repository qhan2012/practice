
dijkstra (node start, node goal, graph G) {
  Queue Q;    // priority queue
  dist(start) = 0;
  push start into Q with 0;
  node n;
  while (!Q.empty() && n != goal) {
    n = Q.pop();
    foreach v in n's adjacent node
      if v is not in Q
        push v into Q with dist(v) ( = dist(u)+(u,v) )
      else 
        update v with dist(v) ( = min(key(v), dist(u)+(u,v)) )
  }
  if n == goal
    return backtrace(goal, start)
  else 
    return not found
}

