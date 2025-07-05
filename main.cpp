//////// شرح مبسط للعبة ///////

       //هي لعبة اسئلة واجوبة في خمس اقسام هم : جغرافيا و فلك وعروستي واسئلة دينية وبرمجة
       // لو جاوبت صح هتاخد خمس نقاط ولو جاوبت غلط هيكون لك خمس محاولات في كل غلطة هيقلوا محاولة
       //اذا خلص عدد محاولاتك ستنتهي اللعبة وتظهر لك عدد نقاطك النهائي



#include <iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;



struct Question {
    string question[10], chose_a[10], chose_b[10];
    string chose_c[10], chose_d[10];
    char answer[10];
    string Answer[10];
};

//////////////////////////////تم///////////////////////////////



           // اعداد اسمي محمد
            //دالة لو دخل اجابة غير a , b ,c,d
            // يطلب منه يدخل اختيار منهم
char Correct(char choise) {
    bool correct = 0;
    if (choise == 'a' || choise == 'b' || choise == 'c' || choise == 'd') {
        correct = 1;
    }
    else {
        correct = 0;
    }
    while (correct != 1) {
        cout << "Warning!! Enter Your answer a or b or c or d :\n";
        cin >> choise;
        if (choise == 'a' || choise == 'b' || choise == 'c' || choise == 'd') {
            correct = 1;
        }
        else {
            correct = 0;
        }

    }
    return choise;
}
///////////////////////////////////////تم/////////////////////////////////



      // اعداد : بسملة محمد
      //لو دخل حاجه غير y , n
      //يظهر عبارة تحذيرية انه يدخلهم
char CorrectArosty(char choise) {
    bool correct = 0;
    if (choise == 'y' || choise == 'n') {
        correct = 1;
    }
    else {
        correct = 0;
    }
    while (correct != 1) {
        cout << "Warning!! Enter Your answer y or n  :\n";
        cin >> choise;
        if (choise == 'y' || choise == 'n') {
            correct = 1;
        }
        else {
            correct = 0;
        }
    }
    return choise;
}
/////////////////////////////////////////تم/////////////////////////////////




    // اعداد : بسملة محمد
    //شرح :لعبة عروستي عبارة عن لغز تحاول حله ولو معرفتش تعطيك مساعدتين كحد اقصي ومع كل مساعده يقل عدد نقاطك بنقطه وحده
long long arostyscore = 0;
Question arosty;
int wrongAnswer = 0;
bool Arosty( int choiseQuestion)
{
    wrongAnswer = 0;
    bool respond = 0;

    arosty.question[0] = "ما هو الشيء الذي إذا ضربته في الزجاج لم ينكسر، وإذا وضعته في الماء لم يبتل؟";
    arosty.question[1] = "ما هو الشيء الذي تملكه أنت ولكن يستخدمه الآخرون أكثر منك؟";
    arosty.question[2] = "ما هو الشيء الذي يحتوي على مفاتيح بلا أقفال، ومسافات بلا غرف، ويمكنك الدخول فيه ولكن لا يمكنك الخروج منه؟";
    arosty.question[3] = "ما هو الشيء الذي يُسمع ويُرى ويُشعر، لكنه لا يتذوق أو يشم؟";
    arosty.question[4] = "ما هو الشيء الذي يُرى في منتصف السماء، ولكنه لا يُرى في منتصف النهار؟";
    arosty.question[5] = "ما هو الشيء الذي كلما ملأته، أصبح أخف؟";
    arosty.question[6] = "ما هو الشيء الذي يمكنه السفر حول العالم ولكنه يبقى في زاوية؟";
    arosty.question[7] = "ما هو الشيء الذي ينبض فقط إذا توقفت عن التنفس؟";
    arosty.question[8] = "ما هو الشيء الذي ينبض بلا قلب؟";
    arosty.question[9] = "ما هو الشيء الذي له عين واحدة ولا يرى؟";


    arosty.chose_a[0] = "يمكن أن يعكس صورتك"; arosty.chose_a[1] = "يتواجد في كل مكان، في العمل والمدرسة والمنزل";
    arosty.chose_a[2] = "يحتوي على أزرار"; arosty.chose_a[3] = "يتواجد في كل بيت تقريبًا"; arosty.chose_a[4] = "يتواجد في كل مكان حولك، لكنك قد لا تلاحظه";
    arosty.chose_a[5] = "يرتبط بالهواء"; arosty.chose_a[6] = "يتم إلصاقه بشيء قبل أن يبدأ رحلته";
    arosty.chose_a[7] = "يعتمد على الضغط والهواء"; arosty.chose_a[8] = "يتصل بالاتصالات والتكنولوجيا";
    arosty.chose_a[9] = "صغير وحاد.";

    arosty.chose_b[0] = "يمكنك رؤيته عندما تفتح عينيك"; arosty.chose_b[1] = "قد يُستخدم لإخبار الآخرين عنك";
    arosty.chose_b[2] = "يعمل بالتكامل مع جهاز آخر"; arosty.chose_b[3] = "ينقل الأخبار والترفيه";
    arosty.chose_b[4] = "يظهر في أوقات معينة من اليوم"; arosty.chose_b[5] = " يُستخدم في الاحتفالات";
    arosty.chose_b[6] = " يجب دفع ثمنه لبدء رحلته"; arosty.chose_b[7] = " يتطلب منك جهدًا لتشغيله";
    arosty.chose_b[8] = "يمكن أن يكون على معصمك أو في جيبك"; arosty.chose_b[9] = "له ثقب في نهايته";


    arosty.Answer[0] = "الضوء"; arosty.Answer[1] = "اسمك"; arosty.Answer[2] = "لوحة المفاتيح"; arosty.Answer[3] = "التلفاز";
    arosty.Answer[4] = "حرف الميم"; arosty.Answer[5] = " البالون"; arosty.Answer[6] = "الطابع البريدي"; arosty.Answer[7] = "البوق أو آلة موسيقية هوائية";
    arosty.Answer[8] = " الساعة"; arosty.Answer[9] = "الإبرة";


    cout << arosty.question[choiseQuestion] << endl << endl;

    cout << "عرفتنى" << endl << "لو عرفتنى اكتب y" << endl << "لو معرفتنيش اكتب n" << endl;

    char answer_arosty;
    cin >> answer_arosty;
    if (answer_arosty=='n')
     wrongAnswer++;

    if (CorrectArosty(answer_arosty) == 'y')
    {cout <<endl <<endl
        <<"-------------------------------------------------------------------"
        <<endl<<endl ;
        cout << endl << "الاجابه هى" << endl << arosty.Answer[choiseQuestion] << endl << endl;
        cout << "!!خمنتنى صح" << endl << "لو خمنتنى صح اكتب y" << endl << "لو خمنتنى غلط اكتب n" << endl;
        cin >> answer_arosty;

        if (CorrectArosty(answer_arosty) == 'y')
        {
            respond = 1;
            arostyscore += 5;
        }
    }


    else if (CorrectArosty(answer_arosty) == 'n')
    {
      cout <<endl <<endl
        <<"-------------------------------------------------------------------"
        <<endl<<endl ;

        cout << endl << "ادى مساعده صغير" << endl << endl << arosty.chose_b[choiseQuestion] << endl << endl;
        cout << "عرفتنى ولا لسه" << endl << "لو عرفتنى اكتب y" << endl << "لو معرفتنيش اكتب n" << endl;
        cin >> answer_arosty;
if (answer_arosty=='n')
     wrongAnswer++;
        if (CorrectArosty(answer_arosty) == 'y')
        {
cout <<endl <<endl
        <<"-------------------------------------------------------------------"
        <<endl<<endl ;
            cout << endl << "الاجابه هى" << endl << arosty.Answer[choiseQuestion] << endl << endl;
            cout << "!!خمنتنى صح" << endl << "لو خمنتنى صح اكتب y" << endl << "لو خمنتنى غلط اكتب n" << endl;
            cin >> answer_arosty;
            if (CorrectArosty(answer_arosty) == 'y')
            {
                respond = 1;
                arostyscore += 4;
            }
        }


        else  if (CorrectArosty(answer_arosty) == 'n')
        {
cout <<endl <<endl
        <<"-------------------------------------------------------------------"
        <<endl<<endl ;
            cout << endl << "لسه بردو طب ادى مساعده تانى" << endl << endl << arosty.chose_a[choiseQuestion] << endl << endl;
            cout << "عرفتنى ولا لسه" << endl << "لو عرفتنى اكتب y" << endl << "لو معرفتنيش اكتب n" << endl; ;
            cin >> answer_arosty;
             if (answer_arosty=='n')
              wrongAnswer++;
            if (CorrectArosty(answer_arosty) == 'y')
            {
cout <<endl <<endl
        <<"-------------------------------------------------------------------"
        <<endl<<endl ;
                cout << endl << "الاجابه هى" << endl << arosty.Answer[choiseQuestion] << endl << endl;
                cout << "!!خمنتنى صح" << endl << "لو خمنتنى صح اكتب y" << endl << "لو خمنتنى غلط اكتب n" << endl;
                cin >> answer_arosty;
                if (CorrectArosty(answer_arosty) == 'y')
                {
                    respond = 1;
                    arostyscore += 3;
                }
            }
        }
    }
    else respond = 0;
    return respond;
}
//////////////////////////////////تم عروستي /////////////////////////////////////






       //اعداد : تسنيم عبد الرحمن
       //شرح : اسئلة في الجغرافيا مع اخيارات الاجابات
bool Geography(int choiseQuestion) {
    Question geography;
    geography.question[0] = "ما هي عاصمة البحرين؟"; geography.question[1] = " ما هي الدولة التي يُطلق عليها أرض الشمس المشرقة؟";
    geography.question[2] = "ما هو أطول نهر في العالم؟"; geography.question[3] = "ما هو البحر الذي يحيط بشبه الجزيرة العربية من الشرق؟";
    geography.question[4] = "ما هي أكبر دولة في العالم من حيث المساحة؟"; geography.question[5] = "ما هي أطول سلسلة جبال في العالم؟";
    geography.question[6] = "ما هي عاصمة اليابان؟"; geography.question[7] = "ما هو أكبر بحيرة في العالم من حيث المساحة؟";
    geography.question[8] = "ما هو أعلى جبل في العالم؟";
    geography.question[9] = "ما هو الجزء الأكبر من الأرض؟";



    geography.chose_a[0] = "سترة";
    geography.chose_a[1] = " الصين"; geography.chose_a[2] = "نهر الميسيسيبي"; geography.chose_a[3] = "البحر العربي";
    geography.chose_a[4] = " الولايات المتحدة"; geography.chose_a[5] = "جبال الروكي"; geography.chose_a[6] = "طوكيو";
    geography.chose_a[7] = "بحيرة فيكتوريا"; geography.chose_a[8] = "جبل إيفرست"; geography.chose_a[9] = "المحيطات";



    geography.chose_b[0] = " الرفاع"; geography.chose_b[1] = "تايوان"; geography.chose_b[2] = "نهر النيل ";
    geography.chose_b[3] = "نهر النيل"; geography.chose_b[4] = "مصر";  geography.chose_b[6] = "كندا";
    geography.chose_b[5] = "جبال الأنديز"; geography.chose_b[7] = " سيول"; geography.chose_b[8] = "بحيرة العظمى الأمريكية"; geography.chose_b[9] = "جبل كليمنجارو", "الجبال";



    geography.chose_c[0] = "المنامة";  geography.chose_c[1]= "كوريا الجنوبية"; geography.chose_c[2] = " نهر اليانغتسي";
    geography.chose_c[3] = " البحر الأحمر"; geography.chose_c[4] = "الصين";
    geography.chose_c[5] = " جبال الهملايا"; geography.chose_c[6] = " بكين";
    geography.chose_c[7] = "بحيرة السد العالي"; geography.chose_c[8] = "جبل ماكينلي"; geography.chose_c[9] = "الصحاري";


    geography.chose_d[0] = "المحرق"; geography.chose_d[1] = " اليابان"; geography.chose_d[2] = "نهر الأمازون"; geography.chose_d[3] = "البحر الأبيض المتوسط";
    geography.chose_d[4] = "روسيا"; geography.chose_d[5] = " جبال الأطلس"; geography.chose_d[6] = "هونغ كونغ";
    geography.chose_d[7] = "بحيرة البايكال"; geography.chose_d[8] = "جبال اطلس"; geography.chose_d[9] = "الغابات";


    geography.answer[0] = 'c'; geography.answer[1] = 'd'; geography.answer[2] = 'b'; geography.answer[3] = 'a'; geography.answer[4] = 'd';
    geography.answer[5] = 'b'; geography.answer[6] = 'a'; geography.answer[7] = 'a'; geography.answer[8] = 'a'; geography.answer[9] = 'a';


    cout << geography.question[choiseQuestion] << endl
        << "a - " << geography.chose_a[choiseQuestion] << "\t" << "b - " << geography.chose_b[choiseQuestion] << endl
        << "c - " << geography.chose_c[choiseQuestion] << "\t" << "d - " << geography.chose_d[choiseQuestion] << endl;

    cout << " Enter Your Answer a or b or c or d : \n";

    char choice;
    cin >> choice;
    if (Correct(choice) == geography.answer[choiseQuestion])
        return 1;
    else
    {
        cout << "اجابه خاطئه  " << "\n";
        cout << geography.answer[choiseQuestion] << "   الاجابه الصحيحه هي";
        return 0;
    }
}

////////////////////////////////////تم الجغرافيا//////////////////////////////////////////////



       //اعداد اسمي محمد
       //شرح : اسئلة برمجة مع اختيارات للاجابات
bool  programming(int choiseQuestion)
{
    Question programming;
    programming.question[0] = "Which logical operator has higher precedence && or|| "; programming.question[1] = "An identifier can be any sequence of digits and letters ";
    programming.question[2] = "The conditional operator written as ( ? : ), is a.......operator"; programming.question[3] = " Which's an example of a run-together identifier?";
    programming.question[4] = "using a variable without giving it an initial value is"; programming.question[5] = "using '=' in place of '==' will produce";
    programming.question[6] = "Which of the following is true about a while loop in C++"; programming.question[7] = "Which of the following can be used for naming variables?";
    programming.question[8] = " Assembler translate program written in"; programming.question[9] = "the errors in execution occur due to mistakes in";

    programming.chose_a[0] = "&&"; programming.chose_a[1] = "True"; programming.chose_a[2] = "unary";
    programming.chose_a[3] = "firstName"; programming.chose_a[4] = "syntax error";
    programming.chose_a[5] = "syntax error"; programming.chose_a[6] = " The condition is evaluated after the loop body executes.";
    programming.chose_a[7] = "Mike'sFirstAttempt"; programming.chose_a[8] = "assembly language into machine language.";
    programming.chose_a[9] = "coding";

    programming.chose_b[0] = "||"; programming.chose_b[1] = "False"; programming.chose_b[2] = "ternary";
    programming.chose_b[3] = "employee-salary"; programming.chose_b[4] = "logical error"; programming.chose_b[5] = "logical error";
    programming.chose_b[6] = "The condition is evaluated before the loop body executes."; programming.chose_b[7] = "bool"; programming.chose_b[8] = "high-level language into assembly language";
    programming.chose_b[9] = "analyzing";


    programming.chose_c[0] = "Sometimes True and Sometimes False"; programming.chose_c[1] = "Sometimes True and Sometimes False"; programming.chose_c[2] = "both";
    programming.chose_c[3] = "_sum"; programming.chose_c[4] = "depends on the compiler"; programming.chose_c[5] = "runtime error";
    programming.chose_c[6] = "The loop body always executes at least once."; programming.chose_c[7] = "1count"; programming.chose_c[8] = "machine language into high-level language";
    programming.chose_c[9] = "designing the algorithm";

    programming.chose_d[0] = "None of these"; programming.chose_d[1] = "None of these"; programming.chose_d[2] = "binary";
    programming.chose_d[3] = "2nd_place"; programming.chose_d[4] = "none of the above"; programming.chose_d[5] = "none of the above";
    programming.chose_d[6] = " "; programming.chose_d[7] = "Integer"; programming.chose_d[8] = "None of these";
    programming.chose_d[9] = "all of the above";

    programming.answer[0] = 'a'; programming.answer[1] = 'b'; programming.answer[2] = 'b';
    programming.answer[3] = 'a'; programming.answer[4] = 'c'; programming.answer[5] = 'b';
    programming.answer[6] = 'b'; programming.answer[7] = 'd'; programming.answer[8] = 'a'; programming.answer[9] = 'd';

    cout << programming.question[choiseQuestion] << endl << "a - " << programming.chose_a[choiseQuestion] << "\t"
        << "b - " << programming.chose_b[choiseQuestion] << endl << "c - " << programming.chose_c[choiseQuestion]
        << "\t" << "d - " << programming.chose_d[choiseQuestion] << endl;

    char choise;
    cout << "Enter Your Answer a or b or c or d :\n";
    cin >> choise;
    if (Correct(choise) == programming.answer[choiseQuestion])
        return 1;
    else
    {
        cout << "اجابه خاطئه  " << "\n";
        cout << programming.answer[choiseQuestion] << "   الاجابه الصحيحه هي";
        return 0;
    }


}
//////////////////////////////////تم البرمجة///////////////////////////////////




         //اعداد :شهد اشرف
         //اسئلة دينية واختيارات الاجابات
bool Islamic(int choiseQuestion)
{
    Question Islamic;
    Islamic.question[0] = "كم عدد أبناء الرسول صلى الله عليه وسلم من الإناث والذكور ؟";
    Islamic.question[1] = " من هو الصحابي الذي كان جبريل عليه السلام ينزل على هيئته؟";
    Islamic.question[2] = "من أكثر الصحابة روايةً للحديث؟";
    Islamic.question[3] = " كم مرة اعتمر رسول الله-صلّى الله عليه وسلّم -؟";
    Islamic.question[4] = "ما اسم الخيل المذكور في القرآن الكريم؟";
    Islamic.question[5] = "ماذا يطلق على الميتة التي تقع من مكان مرتفع ؟ ";
    Islamic.question[6] = "من هي السيدة آسيا؟";
    Islamic.question[7] = "ثمة سورتان تأتيان يوم القيامة لتظلا المداوم على قرائتهما، فما هما؟";
    Islamic.question[8] = "ما السورة التي افتتحت بالتسبيح وختمت به؟";
    Islamic.question[9] = "من هي آخر زوجات رسول الله -صلّى الله عليه وسلّم-؟";


    Islamic.chose_a[0] = " أربع من الإناث، وثلاثة من الذكور"; Islamic.chose_a[1] = "حُذَيفة بن اليمان"; Islamic.chose_a[2] = " السيدة عائشة أم المؤمنين ";
    Islamic.chose_a[3] = "ثلاثة "; Islamic.chose_a[4] = "الرادفة"; Islamic.chose_a[5] = "المتردية"; Islamic.chose_a[6] = "زوجة إبراهيم";
    Islamic.chose_a[7] = "يس والسجدة"; Islamic.chose_a[8] = "التغابن"; Islamic.chose_a[9] = "ميمونة بنت الحارث";


    Islamic.chose_b[0] = "ثلاث من الإناث، أربع من الذكور"; Islamic.chose_b[1] = "دِحية بن خَليفة الكلبي"; Islamic.chose_b[2] = "أنس بن مالك";
    Islamic.chose_b[3] = "اثنين"; Islamic.chose_b[4] = "الزاجرت "; Islamic.chose_b[5] = "النطيحة"; Islamic.chose_b[6] = "زوجة فرعون";
    Islamic.chose_b[7] = "البقرة وآل عمران"; Islamic.chose_b[8] = "الجمعة"; Islamic.chose_b[9] = "سودة بنت زمعة";


    Islamic.chose_c[0] = "ثلاث من الإناث، وثلاثة من الذكور"; Islamic.chose_c[1] = "سَعْد بن أبي وقاص"; Islamic.chose_c[2] = "عبد الله بن عمر";
    Islamic.chose_c[3] = "أربعة"; Islamic.chose_c[4] = "قسورة"; Islamic.chose_c[5] = "الموقوذة"; Islamic.chose_c[6] = "زوجة إسماعيل";
    Islamic.chose_c[7] = "الشمس والفجر"; Islamic.chose_c[8] = "الحشر"; Islamic.chose_c[9] = "جويريّة بنت الحارث";


    Islamic.chose_d[0] = "أربع من الإناث، وأربع من الذكور "; Islamic.chose_d[1] = "خُزيمة بن ثابت بن الفاكِه الأنصاري";
    Islamic.chose_d[2] = "أبو هريرة"; Islamic.chose_d[3] = "خمسة"; Islamic.chose_d[4] = "العاديات"; Islamic.chose_d[5] = "المنخنقة";
    Islamic.chose_d[6] = "زوجة موسى"; Islamic.chose_d[7] = "الفلق والناس"; Islamic.chose_d[8] = "الصف"; Islamic.chose_d[9] = "زينب بنت خزيمة";


    Islamic.answer[0] = 'a'; Islamic.answer[1] = 'b'; Islamic.answer[2] = 'd'; Islamic.answer[3] = 'c'; Islamic.answer[4] = 'd';
    Islamic.answer[5] = 'a'; Islamic.answer[6] = 'b'; Islamic.answer[7] = 'b'; Islamic.answer[8] = 'c'; Islamic.answer[9] = 'a';


    cout << Islamic.question[choiseQuestion] << endl << "a - " << Islamic.chose_a[choiseQuestion] << "\t" << "b - " << Islamic.chose_b[choiseQuestion] << endl << "c - " << Islamic.chose_c[choiseQuestion] << "\t" << "d - " << Islamic.chose_d[choiseQuestion] << endl;

    cout << " Enter Your Answer a or b or c or d : \n";

    char choise;
    cin >> choise;
    if (choise == Islamic.answer[choiseQuestion])
        return 1;
    else
    {
        cout << "اجابه خاطئه  " << "\n";
        cout << Islamic.answer[choiseQuestion] << "   الاجابه الصحيحه هي";
        return 0;
    }
}
//////////////////////////////////تم الاسئلة الدينية //////////////////////////



   //اعداد رغدة مدحت
   //اسئلة عن الفلك واختيارات الاجابات
bool alfalk(int choiseQuestion)
{
    Question alfalk;
    alfalk.question[0] = "أي كوكب يُعرف بالكوكب الأحمر؟ "; alfalk.question[1] = "ما هو أكبر كوكب في المجموعة الشمسية؟";
    alfalk.question[2] = "ما هو اسم المجرة التي تقع فيها المجموعة الشمسية؟"; alfalk.question[3] = "ما هي الظاهرة التي تحدث عندما يمر القمر بين الأرض والشمس؟";
    alfalk.question[4] = "أي من الكواكب التالية لديه أكبر عدد من الأقمار؟"; alfalk.question[5] = "ما هو الكوكب الأقرب الي الشمس؟ ";
    alfalk.question[6] = " ما هو اسم اكبر قمر لكوكب زحل؟"; alfalk.question[7] = "أي الاجرام السماويه التاليه يعرف باسم النجم القطبي؟";
    alfalk.question[8] = "ما هو اسم التلسكوب الفضائى الذى اطلقته ناسا في 1990؟";
    alfalk.question[9] = " أي الكواكب التاليه يعرف بالكوكب الجليدي بسبب غلافه الجوي الغني بالميثان؟";

    alfalk.chose_a[0] = "عطارد";
    alfalk.chose_a[1] = "الارض"; alfalk.chose_a[2] = "مجرة المرأة المسلسله"; alfalk.chose_a[3] = "الكسوف الشمسي"; alfalk.chose_a[4] = "الارض";
    alfalk.chose_a[5] = "عطارد"; alfalk.chose_a[6] = "ايو"; alfalk.chose_a[7] = "نجم الشمال"; alfalk.chose_a[8] = "هابل"; alfalk.chose_a[9] = "اورانوس";

    alfalk.chose_b[0] = "الزهرة"; alfalk.chose_b[1] = "المريخ"; alfalk.chose_b[2] = "مجرة درب التبانه"; alfalk.chose_b[3] = "الكسوف القمري";
    alfalk.chose_b[4] = "المريخ"; alfalk.chose_b[5] = "الزهرة"; alfalk.chose_b[6] = "تيتان"; alfalk.chose_b[7] = "سيرسوس"; alfalk.chose_b[8] = "كيبلر";
    alfalk.chose_b[9] = "نبتون";

    alfalk.chose_c[0] = "المريخ"; alfalk.chose_c[1] = "زحل"; alfalk.chose_c[2] = "مجرة العذراء"; alfalk.chose_c[3] = " الاقتران"; alfalk.chose_c[4] = "زحل";
    alfalk.chose_c[5] = "الارض"; alfalk.chose_c[6] = "غانيميد"; alfalk.chose_c[7] = "بيتا الجبار";
    alfalk.chose_c[8] = "جيمس ويب"; alfalk.chose_c[9] = "زحل";

    alfalk.chose_d[0] = "المشتري"; alfalk.chose_d[1] = "المشتري"; alfalk.chose_d[2] = "مجرة الصياد"; alfalk.chose_d[3] = " المحاق";
    alfalk.chose_d[4] = "نبتون"; alfalk.chose_d[5] = "المريخ"; alfalk.chose_d[6] = "كاليستو"; alfalk.chose_d[7] = "الطائر"; alfalk.chose_d[8] = "سبيتزر";
    alfalk.chose_d[9] = "المشتري";

    alfalk.answer[0] = 'c'; alfalk.answer[1] = 'd'; alfalk.answer[2] = 'b'; alfalk.answer[3] = 'a'; alfalk.answer[4] = 'c'; alfalk.answer[5] = 'a';
    alfalk.answer[6] = 'b'; alfalk.answer[7] = 'a'; alfalk.answer[8] = 'a'; alfalk.answer[9] = 'b';

    cout << alfalk.question[choiseQuestion] << endl << "a - " << alfalk.chose_a[choiseQuestion] << "\t" << "b - " << alfalk.chose_b[choiseQuestion] << endl << "c - " << alfalk.chose_c[choiseQuestion] << "\t" << "d - " << alfalk.chose_d[choiseQuestion] << endl;

    cout << " Enter Your Answer a or b or c or d : \n";

    char choice;

    cin >> choice;
    if (Correct(choice) == alfalk.answer[choiseQuestion])
        return 1;
    else {
        cout << "اجابه خاطئه  " << "\n";
        cout << alfalk.answer[choiseQuestion] << "   الاجابه الصحيحه هي";
        return 0;
    }
}


//////////////////////////////////////////////////تم الفلك /////////////////////////////////////



     // اعداد شهد اشرف
     //عبارات تحفيزية تظهر عند اختيار الاجابات الصحيحة
void motivationalSentences()
{


    int random_sentence;
    srand(time(0));
    random_sentence = rand() % 10;



    string sentences[10];

    sentences[0] = "عمل ممتاز! لديك قدرة على تحقيق النجاح.\n";
    sentences[1] = "إجابة صحيحة! يظهر أنك تفهم جيدًا.\n";
    sentences[2] = "أنت على الطريق الصحيح، تابع التقدم!\n";
    sentences[3] = "رائع! لقد أثبت مهارتك في هذا السؤال.\n";
    sentences[4] = "عمل رائع! استمر على هذا المنوال.\n";
    sentences[5] = "أحسنت! إجابتك صحيحة وتعكس ذكائك.\n";
    sentences[6] = "تستحق الثناء على إجابتك الرائعة.\n";
    sentences[7] = "أصبت الهدف! لكن لا تنسَ، لدينا الكثير من الأسئلة في جعبتنا \n";
    sentences[8] = "أحسنت! يبدو أنك تعرف الإجابات حتى قبل أن أسأل!\n";
    sentences[9] = "رائع! أعتقد أن لديك رادارًا خاصًا يلتقط الإجابات الصحيحة!\n";

    cout << sentences[random_sentence];
}
//////////////////////////////////////////////////////تم///////////////////////////////




          //////////////عمل جماعي//////////////////////
int main() {
    long long sumScore = 0;
    int numberOfTry = 5;
    int distant_geography[10] = { 0 };
    int distant_Arosty[10] = { 0 };
    int distant_alfalk[10] = { 0 };
    int distant_programming[10] = { 0 };
    int  distant_Islamic[10] = { 0 };
    int counterQuestion = 0;
    cout <<"\t\tاهلا بكم فى لعبتنا\n";
    cout <<"\t\t"<<"جاوب يا نينجاااوي"<<endl<<endl ;
    cout << "حان الوقت لاختبار ذكائكم وفتح أبواب جديدة من المعلومات بطريقة مرحة ومثيرة"<<endl<<"\t"<<"\t";
    cout <<"لننطلق في هذه المغامرة الرائعة ونرى من سيكون سيد المعرفة"<<endl;
    cout <<endl << endl ;
    cout<<"------------------------------------------------------------------------"<<endl;
    while (numberOfTry || counterQuestion == 50)
    {
        srand(time(0));
        int choiseQuestion = rand() % 10;
        srand(time(0));

        int rand_question =rand()%5 ;
        if (rand_question == 0) {

            if (distant_geography[choiseQuestion] == 0) {
                distant_geography[choiseQuestion]++;
            }
            else
            {
                continue;
            }

            if (Geography(choiseQuestion)) {
                sumScore += 5;
                motivationalSentences();
                cout << endl << endl;
            }
            else
            {
                numberOfTry--;
                cout << endl << endl << "عدد محاولاتك المتبقيه  :" << numberOfTry << endl << endl;

            }
        }


        if (rand_question == 1) {
            if (distant_Islamic[choiseQuestion] == 0) {
                distant_Islamic[choiseQuestion]++;
            }
            else
            {
                continue;
            }
            if (Islamic(choiseQuestion)) {

                sumScore += 5;
                motivationalSentences();
                cout << endl << endl;
            }
            else
            {
                numberOfTry--;
                cout << endl << endl << "عدد محاولاتك المتبقيه  :" << numberOfTry << endl << endl;

            }
        }


        if (rand_question == 2) {
            if (distant_programming[choiseQuestion] == 0) {
                distant_programming[choiseQuestion]++;
            }
            else
            {
                continue;
            }
            if (programming(choiseQuestion)) {
                sumScore += 5;
                motivationalSentences();
                cout << endl << endl;

            }
            else
            {
                numberOfTry--;
                cout << endl << endl << "عدد محاولاتك المتبقيه  :" << numberOfTry << endl << endl;

            }
        }


        if (rand_question == 3) {
            if (distant_Arosty[choiseQuestion] == 0) {
                distant_Arosty[choiseQuestion]++;
            }
            else
            {
                continue;
            }

            if (Arosty(choiseQuestion)) {

                motivationalSentences();
                cout << endl << endl;
            }
            else
            {
                numberOfTry--;
                if(wrongAnswer==3)
                cout << endl  << endl << "الاجابه الصحيحه هى : "<<arosty.Answer[choiseQuestion];
                cout << endl << endl << "عدد محاولاتك المتبقيه  :" << numberOfTry << endl << endl;

            }
        }
        if (rand_question == 4) {
            if (distant_alfalk[choiseQuestion] == 0) {
                distant_alfalk[choiseQuestion]++;
            }
            else
            {
                continue;
            }

            if (alfalk(choiseQuestion)) {
                sumScore += 5;
                motivationalSentences();
                cout << endl << endl;
            }
            else {
                numberOfTry--;
                cout << endl << endl << "عدد محاولاتك المتبقيه  :" << numberOfTry << endl << endl;


            }

        }
        counterQuestion++;
        cout <<endl <<endl
        <<"--------------------------------------------------------------------------"
        <<endl<<endl ;
    }

    cout << "لقد أنهينا الجولة بعد منافسة شيقة، وكانت النتيجة النهائية هي: [" << sumScore + arostyscore
        << "] نقطة. شكرًا لك على مشاركتك الرائعة وحماسك!";
    cout << endl << endl;
    cout << "     لقد خضنا معًا رحلة مثيرة عبر عوالم المعرفة والاكتشاف!نأمل أن تكونوا قد استمتعتم واستفدتم. إلى لقاء قريب في مغامرة جديدة ومعرفة أكثر تشويقًا!     " << endl
        << " \n" << endl;
    return 0;
}

//////////////////////////////////////تم الحمد لله
