#include "motivationLib.h"

using namespace std;

const string OUT_OF_RANGE_ERROR = "ERROR: index out of range";

const string MOTIVATION_DB[] = {
    "We cannot solve problems with the kind of thinking we employed when we came up with them. — Albert Einstein",
    "It is only when we take chances, when our lives improve. The initial and the most difficult risk that we need to take is to become honest. —Walter Anderson",
    "Nature has given us all the pieces required to achieve exceptional wellness and health, but has left it to us to put these pieces together. —Diane McLaren",
    "When you change your thoughts, remember to also change your world. —Norman Vincent Peale",
    "When you give joy to other people, you get more joy in return. You should give a good thought to happiness that you can give out. — Eleanor Roosevelt",
    "Stay away from those people who try to disparage your ambitions. Small minds will always do that, but great minds will give you a feeling that you can become great too. — Mark Twain",
    "Success is not final; failure is not fatal: It is the courage to continue that counts. — Winston S. Churchill",
    "It is better to fail in originality than to succeed in imitation. — Herman Melville",
    "The road to success and the road to failure are almost exactly the same. — Colin R. Davis",
    "Success is not final, failure is not fatal: it is the courage to continue that counts.",
    "Be the change you wish to see in the world.",
    "Chase your dreams and never give up.",
    "You miss 100\% of the shots you don't take.",
    "Success is stumbling from failure to failure with no loss of enthusiasm.",
    "Success is the sum of small efforts, repeated day in and day out.",
    "Be yourself; everyone else is already taken.",
    "Nothing is impossible, the word itself says 'I'm possible'!",
    "Push yourself, because no one else is going to do it for you.",
    "Every day may not be good, but there's something good in every day.",
    "Life is 10% what happens to us and 90\% how we react to it.",
    "Strive not to be a success, but rather to be of value.",
    "It does not matter how slowly you go as long as you do not stop.",
    "You can't go back and change the beginning, but you can start where you are and change the ending.",
    "Live as if you were to die tomorrow. Learn as if you were to live forever.",
    "Success isn't just about what you accomplish in your life; it's about what you inspire others to do.",
    "The best way to predict the future is to create it.",
    "Stop wishing, start doing.",
    "Be the reason someone smiles today.",
    "Success is a journey, not a destination.",
    "Believe in the power of your dreams.",
    "You have within you right now, everything you need to deal with whatever the world can throw at you.",
    "The biggest risk is not taking any risk.",
    "The future belongs to those who believe in the beauty of their dreams.",
    "If you want to live a happy life, tie it to a goal, not to people or things.",
    "Without hard work and discipline, it is difficult to be a top professional.",
    "You are never too old to set another goal or to dream a new dream.",
    "Do what you love and you'll never have to work a day in your life.",
    "Believe and act as if it were impossible to fail.",
    "Your work is going to fill a large part of your life, and the only way to be truly satisfied is to do what you believe is great work. And the only way to do great work is to love what you do. If you haven't found it yet, keep looking. Don't settle. As with all matters of the heart, you'll know when you find it.",
    "Choose a job you love, and you will never have to work a day in your life.",
    "Your time is limited, don't waste it living someone else's life.",
    "Believe in yourself, take on your challenges, dig deep within yourself to conquer fears. Never let anyone bring you down. You got this.",
    "Chase your dreams until you catch them... and then dream, catch, and dream again!",
    "Never give up, for that is just the place and time that the tide will turn.",
    "Opportunities don't happen. You create them.",
    "I have failed again and again throughout my life. That’s why I’ve been successful.",
    "Your positive action combined with positive thinking results in success.",
    "Act as if what you do makes a difference. It does.",
    "The road to success and the road to failure are almost exactly the same.",
    "I never dreamed about success. I worked for it.",
    "Aim for the moon. If you miss, you may hit a star.",
    "Whatever you are, be a good one.",
    "The only limit to our realization of tomorrow will be our doubts of today.",
    "Start where you are. Use what you have. Do what you can.",
    "Don't wait for opportunities, create them.",
    "Your talent is God's gift to you. What you do with it is your gift back to God.",
    "Believe in yourself, and the rest will fall into place. Have faith in your own abilities, work hard, and there is nothing you cannot accomplish.",
    "Never let the fear of striking out keep you from playing the game.",
    "Don't watch the clock; do what it does. Keep going.",
    "Challenges are what make life interesting and overcoming them is what makes life meaningful.",
    "I never lose. I either win or learn.",
    "The greatest glory in living lies not in never falling, but in rising every time we fall.",
    "If you want to achieve greatness stop asking for permission.",
    "You learn more from failure than from success. Don’t let it stop you. Failure builds character.",
    "Success is not how high you have climbed, but how you make a positive difference to the world.",
    "If you believe it will work out, you'll see opportunities. If you believe it won't, you will see obstacles.",
    "Limitations live only in our minds. But if we use our imaginations, our possibilities become limitless.",
    "Believe in your infinite potential. Your only limitations are those you set upon yourself.",
    "Press forward. Do not stop, do not linger in your journey, but strive for the mark set before you.",
    "Believe you can and you're halfway there.",
    "You don't have to be great to start, but you have to start to be great.",
    "Believe in yourself and all that you are. Know that there is something inside you that is greater than any obstacle.",
    "Success is liking yourself, liking what you do, and liking how you do it.",
    "Believe in your dreams and they may come true; believe in yourself and they will come true.",
    "Be so good they can't ignore you.",
    "Success is not the key to happiness. Happiness is the key to success. If you love what you are doing, you will be successful.",
    };

int MotivationLib::getMaxMotivationSentenceIndex()
{
    int i = 0;
    while (MOTIVATION_DB[i] != 
    "Success is not the key to happiness. Happiness is the key to success. If you love what you are doing, you will be successful.") {
        i++;
    }
    return i++;
}

const std::string& MotivationLib::getMotivationSentenceByIndex(int index)
{
    if (index >= 0 && index <= getMaxMotivationSentenceIndex()) {
        return MOTIVATION_DB[index];
    }

    return OUT_OF_RANGE_ERROR;
}