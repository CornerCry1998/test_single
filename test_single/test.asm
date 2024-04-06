.code

test123 proc

    pushf     
    or qword ptr [rsp], 100h
    popf 
    ret
test123 endp
end