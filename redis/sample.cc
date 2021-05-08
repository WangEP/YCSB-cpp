#include <iostream>
#include <string>
#include <vector>
#include "redis_client.h"

using namespace std;
using namespace ycsbc;

int main(int argc, const char *argv[]) {
  const char *host_port = (argc > 1) ? argv[1] : "127.0.0.1:21000";

  RedisClient *client = new RedisClient(host_port);
  if (client->context() == NULL) {
      printf("err\n");
      return 0;
  }

  client->Command("set a b");

  /* RedisDB db(host, port, false); */
  /* db.Init(); */
  /* string key = "Ren"; */
  /* vector<string> fields; */
  /* fields.push_back("field1"); */
  /* fields.push_back("field3"); */
  /* vector<DB::KVPair> result; */

  /* db.Read(key, key, &fields, result); */
  /* for (auto &p : result) { */
  /*   cout << p.first << '\t' << p.second << endl; */
  /* } */

  /* result[1].second = "HelloWorld!"; */
  /* db.Update(key, key, result); */

  /* result.clear(); */
  /* db.Read(key, key, nullptr, result); */
  /*  for (auto &p : result) { */
  /*   cout << p.first << '\t' << p.second << endl; */
  /* } */

  /* db.Delete(key, key); */
  /* result.clear(); */
  /* db.Read(key, key, nullptr, result); */
  /* cout << "After delete: " << result.size() << endl; */
  return 0;
}
