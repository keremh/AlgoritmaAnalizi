class Vec:
    def __init__(self,Labels,function):
        self.b=labels
        self.f=function
    def zero_vec(D):
        return Vec(D,{})
    def getitem(v,d):
        if d in v.f:
            return v.f[d]
        else:
            return o
    def scalar_mul(v,alpha):
        return Vec(v.D,{d:alpha*getitem(v,d) for d in v.D})
    def add(u,v):
        return Vec(u.D,{d:getitem(u,d)*getitem(v,d) for d in u.D})
    def neg(v):
        return acalar_mul(v,-1)
    def printVec(v_1):
        for d in v_1.D:
            if d in v_1.f:
                print(d,v_1.f[d])
