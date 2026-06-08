#include <stdio.h>
#include <windows.h>
#include <string.h>
#include "headers/ui.h"
#include "headers/database.h"
#include <time.h>

int roast(void)
{

    int roastRunning = 1;
    while (roastRunning)
    {

        system("cls");
        srand(time(NULL));
        showIntro("\n==========================================\n#                                        #\n#             ROAST ENGINE v1.0          #\n#                                        #\n==========================================\n\n");
        roastBoot("\r> Initializing Roast Engine");
        roastBoot("\r> Loading CPU Database");
        roastBoot("\r> Loading GPU Database");
        roastBoot("\r> Loading RAM Database");
        roastBoot("\r> Scanning Your Hardware");
        showIntro("\n==========================================\n");
        printCommandLine("\n> Enter CPU:\n");

        char myCPU[25];
        getCommand(myCPU);
        int cpuTier = searchCPU(myCPU);

        // Prints cpu tier:
        //     printf("> Your cpu tier is: %d\n", cpuTier);

        char cpuTier1[][200] = {
            "... ... ... I don't know what to say, but I think your CPU still pays taxes to Windows XP.",
            "let's be honest... This processor deserves to be hosted in a museum.",
            "Please, someone bring panic attack medication because whenever this processor hears a browser tab, it panics.",
            "processing... error... this CPU still thinks Windows XP is the future.",
            "let's not lie to ourselves... whenever your keyboard sees your CPU, it keeps pressing F to pay respects",
            "wow... this would've been terrifying... in a different century.",
            "this is... adorable, pretty cute to be honest. It's still trying.",
            "I'm not sure what I'm looking at... but I'm certain that all games immediately say: `Put these foolish ambitions to rest`",
            "INITIATING VERDICT... RESULT: PUT THESE FOOLISH AMBITIONS TO REST",
            "... ... ... I don't even know where to start.",
            "efficiency is... no longer part of the equation.",
            "this is... interesting! I admire its commitment to still existing.",
        };

        char cpuTier2[][200] = {
            "let's not lie to ourselves... this is a budget, delusional warrior surviving purely on optimism.",
            "hmm... respectable. It fears Chrome more than Elden Ring bosses.",
            "not bad. A humble CPU that learned to survive, not dominate.",
            "Okay... this CPU treats background apps like mini bosses, and the game itself like the final boss.",
            "it is what it is... multitasking in this system is considered a myth.",
            "I have witnessed generations rise and fall... but never saw a processor that embodied the true definition of `I'm fine, it runs... technically.`",
            "I'm not sure what I'm looking at... but I believe that this CPU thinks that `low settings` is the actual intended experience.",
            "not bad actually. It performs like it's constantly asking for permission from Windows.",
            "this is... interesting! I respect the courage behind this choice.",
            "INITIATING CPU VERDICT... RESULTS: survival-tier CPU detected.",
            "Yeah okay... I see it. Solid CPU for everyday chaos, but whenever you try to run a modern game, it keeps whispering: `Put these foolish ambitions to rest.`",
        };

        char cpuTier3[][200] = {
            "let's not lie to ourselves... this is the definition of `it works, don't complain.`",
            "I'm not sure what I'm looking at... but I'm pretty sure your CPU doesn't fear modern games... it negotiates with them.",
            "hmm. Your CPU handles ray tracing the way vampires handle sunlight.",
            "yeah, okay. I see it. This CPU survives entirely through optimization tutorials.",
            "wow. A CPU powerful enough for gaming and weak enough to still fear too many background apps.",
            "not bad. But before this CPU runs any game, it quietly prays `Please be optimized.`",
            "interesting choice. this processor works hard so your graphics settings can remain inconsistent.",
            "let`s not lie to ourselves... this CPU treats Ultra settings like a myth.",
            "hmm. Performance is fine, but Chrome still feels like a mini boss fight.",
            "I see it now... a Tarnished processor, guided by grace and medium settings.",
        };

        char cpuTier4[][200] = {
            "this is... beautiful. overkill, but beautiful.",
            "yeah... this CPU doesn't need optimization. optimization needs it.",
            "I'm not sure what I'm looking at... but video games seem to load out of respect.",
            "I don't know how to say this honestly... but Task Manager gave up and resigned",
            "wow... this CPU runs games like it's doing them a favor.",
            "this is... interesting! I respect the financial decision and the confidence required for this.",
            "yeah, okay... I see it now. this CPU scares benchmark tools into behaving properly.",
            "This is... interesting! This CPU can max out everything in the settings... including my confusion and electricity bill.",
            "Noted... performance is certainly stable... but every time this CPU launches a game, Jason checks Task Manager.",
            "let's not lie to ourselves... this CPU is powerful enough for gaming, but not powerful enough to survive Friday the 13th",
            "Hmm... I see it... this CPU doesn't fear modern games... it just waits for Friday the 13th to decide its fate.",
            "INITIATING PERFORMANCE VERDICT... RESULT: `CPU boss fight detected.`",
            "Processing... processing... system anomaly detected! performance too stable to be legal.",
        };

        char cpuTier5[][200] = {
            "Let's be honest... whoever has this CPU is basically hosting a nuclear facility in their home.",
            "processing... processing... warning! owning this CPU is basically running a nuclear facility from your desk.",
            "Impressive! in a `you can cook eggs above the CPU while compiling shaders` kind of way.",
            "let's not lie to ourselves... you need fire safety training before powering on your PC.",
            "Testing subject... warning! warning! Biohazard weapon detected! Test result: `thermonuclear bomb disguised as a high-end CPU.`",
            "efficiency analysis failed... reason: performance exceeds theoretical limits.",
            "this is... beautiful. unnecessary, but beautifully unnecessary.",
            "... ... ... I don't know how to say this, but this CPU never opens settings",
            "I'm not sure what I'm looking at... but your CPU's cooling solution just started praying.",
            "Just wow... this CPU turns idle mode into a cooking simulator.",
            "this is... cozy. dangerously cozy.",
            "... A moment of silence for the realization that your home doesn't need a heater... this CPU is already doing the job.",
        };

        printCommandLine("\n> Enter GPU:\n");

        char myGPU[25];
        getCommand(myGPU);
        int gpuTier = searchGPU(myGPU);

        char gpuTier1[][200] = {
            "... ... ... I don't know what to say, but I think I heard the GPU sighed when I opened the settings menu",
            "let's be honest... This graphics card deserves to be hosted in a museum.",
            "Please, someone call 911... this graphics card just fainted when it heard the PC user saying `It's time for a gameplay session`",
            "processing... error... this GPU still thinks Windows XP is the future.",
            "let's not lie to ourselves... whenever your keyboard sees your GPU, it keeps pressing F to pay respects",
            "wow... this would've been terrifying... in a different century.",
            "this is... cute, pretty adorable, if you know what I mean. It's still trying to run at an average of 10 FPS.",
            "I'm not sure what I'm looking at... but I'm certain that all modern video games immediately say: `Put these foolish ambitions to rest`",
            "INITIATING VERDICT... RESULT: PUT THESE FOOLISH AMBITIONS TO REST",
            "... ... ... I don't even know where to start.",
            "console level performance is... no longer part of the equation.",
            "this is... interesting! I admire its commitment to still existing.",
            "this is... interesting! I admire its confidence against modern game engines and video editors.",
            "INITIATING GRAPHICS VERDICT... RESULT: `cinematic slideshow experience detected.`",
            "Let's be honest... I think this GPU still believes DirectX 11 is cutting-edge technology.",
            "wow... this would've dominated... several console generations ago.",
            "... ... ... I don't know how to say it, but your GPU just asked if `Ultra settings` were a prank.",
            "let's be honest... this GPU fears realistic graphics and reflections more than horror games.",
        };

        char gpuTier2[][200] = {
            "let's not lie to ourselves... this is a budget, delusional warrior surviving purely on optimism.",
            "hmm... respectable. It fears ray-tracing more than Elden Ring bosses.",
            "not bad. A humble GPU that learned to survive, not dominate.",
            "Processing... hmm... this GPU runs games, but only after negotiating visual sacrifices with the PC user.",
            "it is what it is... I think this GPU believes high settings are a myth made by RTX users.",
            "I have witnessed generations rise and fall... but never saw a graphics card that embodied the true definition of `I'm fine, it runs... technically.`",
            "I'm not sure what I'm looking at... but I believe that this GPU thinks that `low settings` is the actual intended experience.",
            "not bad actually. It's trying to render modern lighting effects.",
            "this is... interesting! I respect the courage behind this choice.",
            "INITIATING GPU VERDICT... RESULTS: surviving GPU detected.",
            "Yeah okay... I see it. Solid GPU for Windows 10, but whenever you try to run a modern game, it keeps whispering: `Put these foolish ambitions to rest.`",
            "this is... adorable. It still believes it can run modern AAA titles on medium settings.",
            "Wow... this would've been terrifying... in the previous graphics era.",
            "... ... ... I don't know how what's happening, but your GPU just lowered resolution before the game even asked.",
            "let's not lie to ourselves... this GPU gets emotionally damaged by opening the settings menu.",
        };

        char gpuTier3[][200] = {
            "let's not lie to ourselves... this is the definition of `it works, don't complain.`",
            "I'm not sure what I'm looking at... but I'm pretty sure your GPU doesn't fear modern games... it negotiates with them.",
            "hmm. Your GPU handles ray tracing the way vampires handle sunlight.",
            "I don't know how to say it, but this GPU survives entirely on in-game settings optimization tutorials.",
            "I'm not sure what I'm looking at... but textures are loading like they're doing me a favor.",
            "That's not bad actually, I believe that before this GPU runs any game, it quietly prays `Please be optimized.`",
            "Interesting choice... this graphics card is working really hard while you sit back and do absolutely nothing. Consider your life choices.",
            "let`s not lie to ourselves... this GPU treats 'Ultra settings' like a myth.",
            "wow... this GPU still believes it can impress modern AAA titles.",
            "I see it now... a Tarnished graphics card, guided by grace and medium settings.",
            "hmm... I think this GPU considers 'high settings' a conspiracy theory.",
            "I personally recall that once upon a time, I opened a game and the GPU immediately suggested a 'medium settings lifestyle.'",
        };

        char gpuTier4[][200] = {
            "this is... beautiful. overkill, but beautiful.",
            "yeah... this GPU doesn't need optimization. optimization needs it.",
            "I'm not sure what I'm looking at... but video games seem to render out of respect.",
            "I don't know how to say this honestly... but the settings menu gave up and resigned",
            "wow... this GPU runs games like it's doing them a favor.",
            "this is... interesting! I respect the financial decision and the confidence required for this.",
            "yeah, okay... I see it now. this GPU scares benchmark tools into behaving properly.",
            "This is... interesting! This GPU can max out everything in the settings... including my confusion and electricity bill.",
            "Noted... performance is certainly stable... but every time this GPU launches a game, Jason checks MSI Afterburner.",
            "let's not lie to ourselves... this GPU is powerful enough for gaming, but not powerful enough to survive Friday the 13th",
            "Hmm... I see it... this GPU doesn't fear modern games... it just waits for Friday the 13th to decide its fate.",
            "INITIATING PERFORMANCE VERDICT... RESULT: `GPU boss fight detected.`",
            "Processing... processing... system anomaly detected! frames too stable to be legal.",
            "Wow... impressive in a 'your monitor is now the bottleneck' kind of way.",
            "let's not lie to ourselves... this GPU doesn't run games, it convinces them to behave.",
            "this is... really interesting! I admire its ability to make 1440p feel insecure.",
            "Once upon a time, I opened a game and MSI Afterburner started sweating.",
            "INITIATING GRAPHICS VERDICT... RESULT: `settings menu no longer relevant.`",
            "I don't know how can I say it, but I'm sure this GPU doesn't render games, it politely humiliates them.",
            "hmm... I think this GPU considers 'low settings' a personal insult.",
            "let's be honest... even game developers test their source code on this GPU out of fear.",
            "yeah... I see where this is going, this GPU doesn't struggle with games, games struggle with it.",
        };

        char gpuTier5[][200] = {
            "Let's be honest... whoever has this GPU is basically hosting a nuclear facility in their home.",
            "processing... processing... warning! owning this GPU is basically running a nuclear facility from your desk.",
            "Impressive! this GPU renders reality before the engine compiles it.",
            "let's not lie to ourselves... you need fire safety training before powering on your PC.",
            "Testing subject... warning! warning! Biohazard weapon detected! Test result: `thermonuclear bomb disguised as a high-end GPU.`",
            "efficiency analysis failed... reason: frame rates exceed theoretical limits.",
            "this is... beautiful. unnecessary, but beautifully unnecessary.",
            "... ... ... I don't know how to say this, but this GPU never sees the settings menu",
            "I'm not sure what I'm looking at... but your GPU's heatsink just started praying.",
            "Just wow... this GPU turns idle mode into a cooking simulator.",
            "this is... cozy. dangerously cozy.",
            "... A moment of silence for the realization that your home doesn't need a heater... this GPU is already doing the job.",
            "noted. The user is now capable of opening Chrome, Discord, Blender, Unreal Engine, and emotional trauma simultaneously.",
            "let's not lie to ourselves... with this GPU you can max out every setting, including your electricity bill.",
            "Well... I've seen this before, Here we go again!",
            "I don't know what to say, but I watched this GPU launch a game, stream it, render a video, and still ask: `is that all?`",
            "Let's be honest... this GPU could probably run Crysis on a refrigerator just to prove a point.",
            "this is... unbelievable. You can now open Unreal Engine without hearing your PC plead for mercy.",
            "the moment this GPU launched Cyberpunk, the city gained a higher population density. GOOOOOOOOOD MORNING NIGHT CITY!",
            "Wake the f*** up, Samurai. We have a PC to burn",
            "Wake the f*** up, Samurai. We have a video game to burn",
            "let's not lie to ourselves... whenever your PC sees your GPU, it keeps pressing F to pay respects",
        };

        printCommandLine("\n> Enter RAM size:\n");

        char myRAM[25];
        getCommand(myRAM);
        int ramTier = searchRAM(myRAM);

        char ramTier1[][200] = {
            "... ... ... I don't know what to say, but I think I heard the RAM sigh when I opened Chrome with 3 tabs.",
            "let's be honest... this RAM deserves to be hosted in a museum.",
            "Please, someone call 911... this RAM just fainted when it heard the PC user saying `let's open Discord too`.",
            "processing... error... this RAM still thinks 2GB is enough for modern operating systems.",
            "let's not lie to ourselves... whenever your CPU sees this RAM, it keeps pressing F to pay respects.",
            "wow... this would've been terrifying... in a different decade.",
            "this is... cute, pretty adorable, if you know what I mean. It's still trying to run multitasking.",
            "I'm not sure what I'm looking at... but I'm certain that all modern applications trying to work together immediately say: `Put these foolish ambitions to rest`.",
            "INITIATING MEMORY VERDICT... RESULT: PUT THESE FOOLISH TABS TO REST.",
            "... ... ... I don't even know where to start, the memory already forgot why I started.",
            "console level multitasking is... no longer part of the equation.",
            "this is... interesting! I admire its commitment to still holding data for more than 5 seconds.",
            "this is... interesting! I admire its confidence against modern browsers and background services.",
            "INITIATING MEMORY VERDICT... RESULT: `single-tab survival experience detected.`",
            "Let's be honest... I think this RAM still believes 4GB is future-proof.",
            "wow... this would've dominated... several browser generations ago.",
            "... ... ... I don't know how to say it, but your RAM just asked if `multitasking` was a prank.",
            "let's be honest... this RAM fears Chrome tabs and Windows updates more than horror games.",
        };

        char ramTier2[][200] = {
            "let's not lie to ourselves... this is a budget, delusional memory stick surviving purely on optimism.",
            "hmm... respectable. It fears Chrome tabs more than Elden Ring bosses.",
            "not bad. A humble RAM that learned to survive, not multitask.",
            "Processing... hmm... this RAM runs apps, but only after negotiating which one gets to exist.",
            "it is what it is... I think this RAM believes multitasking is a myth made by DDR5 users.",
            "I have witnessed generations rise and fall... but never saw a memory module that embodied the true definition of `I'm fine, I can remember... hopefully.`",
            "I'm not sure what I'm looking at... but I believe this RAM thinks 'closing apps' and 'optimizing Windows' are the intended experiences.",
            "not bad actually. It's trying to hold modern applications together with pure determination.",
            "this is... interesting! I respect the courage behind attempting to open multiple tabs.",
            "INITIATING MEMORY VERDICT... RESULT: surviving RAM detected.",
            "Yeah okay... I see it. Solid memory for Windows 10, but whenever you open Chrome, it whispers: `Just one tab, please.`",
            "this is... adorable. It still believes multitasking and gaming can coexist peacefully.",
            "Wow... this would've been terrifying... in the previous computing era.",
            "... ... ... I don't know what's happening, but your RAM just started unloading tabs before you even clicked anything.",
            "let's not lie to ourselves... this RAM gets emotionally damaged by opening Discord and Spotify at the same time."};

        char ramTier3[][200] = {
            "let's not lie to ourselves... this is the definition of `it works, don't complain.`",
            "I'm not sure what I'm looking at... but I'm pretty sure your RAM doesn't fear multitasking... it negotiates which tab survives.",
            "hmm. Your RAM handles Chrome the way a librarian handles chaos.",
            "I don't know how to say it, but this RAM survives entirely on closing background processes tutorials.",
            "I'm not sure what I'm looking at... but applications are loading like they're asking permission to exist.",
            "That's not bad actually, I believe that before this RAM loads anything, it quietly prays `Please don't open Discord, Steam, Chrome and Adobe software altogether.`",
            "Interesting choice... this memory is working really hard while you try to multitask like a responsible human being.",
            "let's not lie to ourselves... this RAM treats 'multi-tab browsing' like a risky experiment.",
            "wow... this RAM still believes it can handle modern multitasking with dignity.",
            "I see it now... a Tarnished memory module, guided by grace and selective loading.",
            "hmm... I think this RAM considers 'background apps' a conspiracy theory.",
            "I personally recall that once upon a time, I opened Chrome and the RAM immediately suggested a 'one tab lifestyle.'",
            "this is... adorable. It believes it can still manage everything at once.",
            "wow... this memory handles modern apps like a responsible adult holding too many groceries.",
            "yeah okay... this memory runs games and apps like it's carefully budgeting attention",
            "WARNING... MULTITASKING LIMIT APPROACHING... Chrome has entered negotiation mode.",
            "let's not lie to ourselves... opening 30 tabs is now a personal character test.",
        };

        char ramTier4[][200] = {
            "this is... beautiful. overkill, but beautifully unnecessary for just Chrome and Discord.",
            "yeah... this RAM doesn't need optimization. optimization needs it.",
            "I'm not sure what I'm looking at... but applications start loading out of respect.",
            "I don't know how to say this honestly... but Task Manager stopped monitoring memory out of fear.",
            "wow... this RAM runs multitasking like it's doing the user a favor.",
            "this is... interesting! I respect the financial decision and the confidence required to open 40 tabs peacefully.",
            "yeah, okay... I see it now. this RAM scares background processes into behaving properly.",
            "This is... interesting! this RAM can max out everything... including my confusion and electricity bill.",
            "Noted... performance is certainly stable... but every time this RAM loads Chrome, Discord starts behaving politely.",
            "let's not lie to ourselves... this RAM is powerful enough for gaming, but still opens Notepad like it's a system ritual.",
            "hmm... I see it... this RAM doesn't fear multitasking... it just silently absorbs everything.",
            "INITIATING MEMORY VERDICT... RESULT: `background process boss fight detected.`",
            "processing... processing... system anomaly detected! Chrome tabs are now stable beyond legal limits.",
            "wow... impressive in a 'your CPU is now the bottleneck' kind of way.",
            "let's not lie to ourselves... this RAM doesn't run apps, it hosts them like a server.",
            "this is... really interesting! I admire its ability to make Chrome behave like a lightweight application.",
            "once upon a time, I opened Chrome and Task Manager stopped reacting out of respect.",
            "INITIATING MEMORY VERDICT... RESULT: `multitasking no longer a challenge, just a suggestion.`",
            "I don't know how to say it, but I'm sure this RAM doesn't manage apps, it politely dominates them.",
            "hmm... I think this RAM considers 'low memory usage' a personal insult.",
            "let's be honest... even operating systems benchmark themselves on this RAM before booting.",
            "yeah... I see where this is going, this RAM doesn't struggle with workloads, workloads struggle with it.",
            "I'm not sure what I'm looking at... but every app now loads like it's entering a VIP lounge.",
            "wow... impressive in a `Task Manager no longer feels needed` kind of way.",
            "let's not lie to ourselves… this memory runs Discord, Chrome, and Unreal Engine like it's checking emails.",
            "... ... ... ... I opened 40 tabs and the system calmly asked if that was all.",
            "efficiency analysis complete... conclusion: multitasking no longer a challenge, just background noise.",
            "wow... this memory treats modern apps like lightweight notifications.",
            "let's be honest... even your CPU started behaving more responsibly.",
        };

        char ramTier5[][200] = {
            "let's be honest... whoever has this RAM is basically hosting a small data center inside their PC.",
            "processing... processing... warning! this RAM is equivalent to running a server farm from your desk.",
            "impressive! this RAM loads applications before you even think about opening them.",
            "let's not lie to ourselves... you no longer need to close apps, they close themselves out of respect.",
            "testing subject... warning! warning! anomaly detected! result: `memory module capable of simulating entire operating systems inside itself.`",
            "efficiency analysis failed... reason: multitasking exceeds measurable system limits.",
            "this is... beautiful. unnecessarily overbuilt, but mathematically satisfying.",
            "... ... ... I don't know how to say this, but this RAM no longer recognizes the concept of 'low memory.'",
            "I'm not sure what I'm looking at... but your Task Manager just decided to stop reporting for emotional safety.",
            "just wow... this RAM turns idle systems into fully loaded virtual environments.",
            "this is... cozy. dangerously cozy. like running a cloud server on a desktop PC.",
            "... a moment of silence for the realization that your PC no longer needs optimization… it is the optimization.",
            "noted. the user is now capable of opening Chrome, Discord, Blender, Unreal Engine, 50 background services, and emotional stability simultaneously.",
            "let's not lie to ourselves... with this RAM you can max out every workload, including workloads that don't exist yet.",
            "well... I've seen this before... here we go again... system class: overkill confirmed.",
            "I don't know what to say, but I watched this RAM run 200 tabs, render a video, compile a game, and still ask: 'what next?'",
            "let's be honest... this RAM could simulate an entire city just to decide which tab to keep open.",
            "this is... unbelievable. you can now run Unreal Engine, Unity, Blender, and a virtual machine inside a virtual machine without noticing.",
            "the moment this RAM was installed, Windows stopped being an operating system and became a suggestion system. GOOD MORNING REALITY.",
            "wake the f*** up, Samurai... we have a server to run.",
            "wake the f*** up, Samurai... we have reality to render.",
            "let's not lie to ourselves... whenever your CPU sees this RAM, it starts asking for permission before thinking.",
            "I'm not sure what I'm looking at... but Task Manager just asked for retirement benefits.",
            "Amazing! impressive in a 'you accidentally built a server farm in your bedroom' kind of way.",
            "I once opened 200 tabs and the system responded: 'Is that supposed to be a challenge, Sensei?'",
        };

        showIntro("\n==========================================\n\n");
        roastBoot("\r> Input received... Please, why would you do this?");

        roastBoot("\r> Scanning hardware... please don't be ancient");

        roastBoot("\r> CPU is sweating... GPU is whispering... RAM is panicking");

        roastBoot("\r> Checking performance... this might hurt emotionally");

        roastBoot("\r> Benchmarking reality... results may cause disappointment");

        roastBoot("\r> SYSTEM WARNING: roasting privileges confirmed");

        roastBoot("\r> Preparing judgment... may the frames be ever in your favor... or not");
        showIntro("\n==========================================\n\n");
        printf("> SYSTEM REPORT");
        // 1 -> prints CPU roasts

        if (cpuTier == 1)
        {
            int randomIndex = rand() % 12;
            printf("\n\nCPU STATUS:\n");
            printf("%s... %s", myCPU, cpuTier1[randomIndex]);
        }

        else if (cpuTier == 2)
        {
            int randomIndex = rand() % 11;
            printf("\n\nCPU STATUS:\n");
            printf("%s... %s", myCPU, cpuTier2[randomIndex]);
        }

        else if (cpuTier == 3)
        {
            int randomIndex = rand() % 10;
            printf("\n\nCPU STATUS:\n");
            printf("%s... %s", myCPU, cpuTier3[randomIndex]);
        }

        else if (cpuTier == 4)
        {
            int randomIndex = rand() % 13;
            printf("\n\nCPU STATUS:\n");
            printf("%s... %s", myCPU, cpuTier4[randomIndex]);
        }

        else if (cpuTier == 5)
        {
            int randomIndex = rand() % 12;
            printf("\n\nCPU STATUS:\n");
            printf("%s... %s", myCPU, cpuTier5[randomIndex]);
        }

        // 2 -> prints GPU roasts

        if (gpuTier == 1)
        {
            int randomIndex = rand() % 18;
            printf("\n\nGPU STATUS:\n");
            printf("%s... %s", myGPU, gpuTier1[randomIndex]);
        }

        else if (gpuTier == 2)
        {
            int randomIndex = rand() % 15;
            printf("\n\nGPU STATUS:\n");
            printf("%s... %s", myGPU, gpuTier2[randomIndex]);
        }

        else if (gpuTier == 3)
        {
            int randomIndex = rand() % 12;
            printf("\n\nGPU STATUS:\n");
            printf("%s... %s", myGPU, gpuTier3[randomIndex]);
        }

        else if (gpuTier == 4)
        {
            int randomIndex = rand() % 22;
            printf("\n\nGPU STATUS:\n");
            printf("%s... %s", myGPU, gpuTier4[randomIndex]);
        }

        else if (gpuTier == 5)
        {
            int randomIndex = rand() % 22;
            printf("\n\nGPU STATUS:\n");
            printf("%s... %s", myGPU, gpuTier5[randomIndex]);
        }

        // 3 -> prints RAM roasts

        if (ramTier == 1)
        {
            int randomIndex = rand() % 18;
            printf("\n\nRAM STATUS:\n");
            printf("%s RAM... %s", myRAM, ramTier1[randomIndex]);
        }

        else if (ramTier == 2)
        {
            int randomIndex = rand() % 15;
            printf("\n\nRAM STATUS:\n");
            printf("%s RAM... %s", myRAM, ramTier2[randomIndex]);
        }

        else if (ramTier == 3)
        {
            int randomIndex = rand() % 17;
            printf("\n\nRAM STATUS:\n");
            printf("%s RAM... %s", myRAM, ramTier3[randomIndex]);
        }

        else if (ramTier == 4)
        {
            int randomIndex = rand() % 29;
            printf("\n\nRAM STATUS:\n");
            printf("%s RAM... %s", myRAM, ramTier4[randomIndex]);
        }

        else if (ramTier == 5)
        {
            int randomIndex = rand() % 25;
            printf("\n\nRAM STATUS:\n");
            printf("%s RAM... %s", myRAM, ramTier5[randomIndex]);
        }

        Sleep(3000);

        printText("\n\n==========================================\n\n");
        printText("[ ROAST COMPLETE! AWAITING NEXT COMMAND ]\n\n");
        printText("==========================================\n\n");
        printText("==========================================\n#                                        #\n#          ROAST OS COMMANDS v1.0        #\n#                                        #\n==========================================\n\n> roast_engine --reroast\n> roast_engine --shutdown\n\n==========================================\n\n");

        char myCommand[25];

        printCommandLine("root@roast-os:~$ ");
        getCommand(myCommand);

        int reroastCommand = strcmp("roast_engine --reroast", myCommand);
        int shutdownCommand = strcmp("roast_engine --shutdown", myCommand);

        if (reroastCommand == 0)
        {
            roastRunning = 1;
        }
        else if (shutdownCommand == 0)
        {
            printf("\n");
            sysBoot("\r> Shutting down RoastOS");
            roastRunning = 0;
        }
        else
        {
            printCommandLine("\n> roast_engine: unknown command, please try again.\n\n");
            printCommandLine("root@roast-os:~$ ");
            getCommand(myCommand);
        }
    }
}