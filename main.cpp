/*<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8"> 
<title>dsa_project</title> 

<script>
function myFunction(){
	document.querySelector("#demo").innerHTML="我的第一个 JavaScript 函数"
}
</script>
<!-- The `multiple` attribute lets users select multiple files. -->
<input type="file" id="file-selector" multiple>
<script>
  const fileSelector = document.getElementById('file-selector');
  fileSelector.addEventListener('change', (event) => {
    const fileList = event.target.files;
    console.log(fileList);
  });
</script>

</head>
<body>
	
<h1>我的 Web 页面</h1>
<p id="demo">一个段落。</p>
<button type="button" onclick="myFunction()">点击这里</button>
	
<script>

var threshold=10;


/*----------Queue类定义----------*/
/*
function Queue(){
    this.dataStore = [];
    this.enqueue=enqueue;
    this.dequeue=dequeue;
    this.front=front;
    this.back=back;
    this.toString=toString;
    this.empty=empty;
}

function enqueue(element){
    this.dataStore.push(element)

}

function dequeue(){
    var priority = this.dataStore[0].weight;
    var fromIndex = 0;
    for (var i=1; i<this.dataStore.length; ++i){
        if (this.dataStore[weight]<priority){
            fromIndex=i;
        }
    }
    return this.dataStore.splice(fromIndex,i);
}

function toString(){
    var retStr = "";
    for  (var i=0; i<dataStore.length; ++i){
        retSt += ""
    }
    return retStr;
}

function empty(){
    if(this.dataStore.length==0){
        return true;
    }else{
        return false;
    }

}
function count(){
    return this.dataStore.length;
}

/*------------堆排序------------*/

/*
function heapify(arr,length,i){
    let largest = i;
    let left = i*2 + 1;
    let right = left +1;

    if(left < length && arr[left] > arr[largest]){
        largest = left;
    }

    if(right < length && arr[right] > arr[largest]){
        largest = right;
    }

    if (largest != i){
        [arr[i],arr[largest]] = [arr[largest],arr[i]];
        heapify(arr,length,largest);
    }
    return arr;
}

function heapSort(arr){
    let length = arr.length;
    let i = length/2 - 1;
    let k = length - 1;
    while (i>=0){
        heapify(arr, length, i);
        i--;
    }

    while (k>=0) {
        [arr[0],arr[k]]=[arr[k],arr[0]];
        heapify(arr, k, 0);
        k--;
    }
    return arr;
}

/*------------飞机实体-------------*/
/*
function flight () {
    var flightNum;
    var fuel;
    var arrivingTime;
    var enterTime;
    var weight;
    function flight(flightNum,fuel,arrivingTime,enterTime){
        this.flightNum=flightNum;
        this.fuel=fuel;
        this.arrivingTime=arrivingTime;
        this.enterTime=enterTime;
        this.weight=100-fuel;
    }
    
}

/*------------生成油量随机数-------------*//*
function randomNum(minNum,maxNum){ 
    switch(arguments.length){ 
        case 1: 
            return parseInt(Math.random()*minNum+1,10); 
        break; 
        case 2: 
            return parseInt(Math.random()*(maxNum-minNum+1)+minNum,10); 
        break; 
            default: 
                return 0; 
            break; 
    } 
} 

/*------------读入文件-------------*/

//用户选择文件

//读入文件
/*
function readImage(file) {

  const reader = new FileReader();
  reader.addEventListener('load', (event) => {
    img.src = event.target.result;
  });
  reader.readAsText(file);
}



</script>



</body>
</html>
*/


#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

   // class <template T>
    public class flight
    {
        public:
        String flightnum;
        int fuel;
        String arrivingTime;
        String enterTime;
        int weight;
        bool takeoff;

    };

    void read()
    {
        string flight[25];
        //int I[25][2];
        string I[25][3];
        ifftream myfile("timeTable.txt");
        if(!myfile.isopen())
        {
            cout<<"can't open"<<endl;
        
        }
       
        for(int i=0;i<25;i++){
            for(int j=0;j<3;j++){
                myfile>>I[i][j];
            }
        }

        for(int i=0;i<25;i++){
            flight[i].flightnum=str[i][0];
          
            if(str[i][1]!="0"){
                flight[i].takeoff=true;
                flight[i].enterTime=str[i][1];
            }else{
                flight[i].takeoff=false;
                flight[i].enterTime=str[i][2];
            }
            
        }

    }

    



