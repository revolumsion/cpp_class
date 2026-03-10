#include"analyzer.hxx"



void analyzer::all_out(vector<shared_ptr<particle>> particles)
{
    for (const auto& val: particles)
    {
       val->where_am_i();
    }
}

