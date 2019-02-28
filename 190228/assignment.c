#include <stdio.h>

int main()
{
    const int YEAR = 2019;

    /* player A */
    char nameA[30];
    char nationalityA[30];
    char prefferredFootA[30];
    char teamA[30];
    double heightA;
    double weightA;
    long long wageA;
    long long valueA;

    /* Technical */
    int cornersA;
    int crossingA;
    int dribblingA;
    int finishingA;
    int firstTouchA;
    int freeKickTakingA;
    int headingA;
    int longShotsA;
    int longThrowsA;
    int markingA;
    int passingA;
    int penaltyTakingA;
    int techniqueA;

    /* Mental */
    int aggressionA;
    int anticipationA;
    int braveryA;
    int composureA;
    int concentrationA;
    int decisionsA;
    int determinationA;
    int flairA;
    int leadershipA;
    int offTheBallA;
    int PositioningA;
    int teamworkA;
    int visionA;
    int workrateA;

    /* Physical */
    int accelerationA;
    int agilityA;
    int balanceA;
    int jumpingReachA;
    int naturalFitnessA;
    int paceA;
    int staminaA;
    int strengthA;

    /* player B */
    char nameB[30];
    char nationalityB[30];
    char prefferredFootB[30];
    char teamB[30];
    double heightB;
    double weightB;
    long long wageB;
    long long valueB;

    /* Technical */
    int cornersB;
    int crossingB;
    int dribblingB;
    int finishingB;
    int firstTouchB;
    int freeKickTakingB;
    int headingB;
    int longShotsB;
    int longThrowsB;
    int markingB;
    int passingB;
    int penaltyTakingB;
    int techniqueB;

    /* Mental */
    int aggressionB;
    int anticipationB;
    int braveryB;
    int composureB;
    int concentrationB;
    int decisionsB;
    int determinationB;
    int flairB;
    int leadershipB;
    int offTheBallB;
    int PositioningB;
    int teamworkB;
    int visionB;
    int workrateB;

    /* Physical */
    int accelerationB;
    int agilityB;
    int balanceB;
    int jumpingReachB;
    int naturalFitnessB;
    int paceB;
    int staminaB;
    int strengthB;

    printf("Welcome to Football Scouter %d\n", YEAR);
    printf("FS%d는 두 선수의 능력치를 비교해서 보여줍니다.\n", YEAR);

    printf("--기본 정보--\n");
    printf("첫번쨰 선수의 이름>>");
    scanf("%s", nameA);

    printf("--기술적 능력--\n");
    printf("%s의 코너킥>>", nameA);
    scanf("%d", cornersA);

    printf("%s의 크로스>>", nameA);
    scanf("%d", crossingA);
    printf("%s의 드리블>>", nameA);
    scanf("%d", dribblingA);
    printf("%s의 골 결정력>>", nameA);
    scanf("%d", finishingA);
    printf("%s의 볼 트래핑>>", nameA);
    scanf("%d", firstTouchA);
    printf("%s의 프리킥>>", nameA);
    scanf("%d", freeKickTakingA);
    printf("%s의 헤딩>>", nameA);
    scanf("%d", headingA);
    printf("%s의 중거리 슛>>", nameA);
    scanf("%d", longShotsA);
    printf("%s의 장거리 스로인>>", nameA);
    scanf("%d", longThrowsA);
    printf("%s의 일대일마크>>", nameA);
    scanf("%d", markingA);
    printf("%s의 패스>>", nameA);
    scanf("%d", passingA);
    printf("%s의 패널티킥>>", nameA);
    scanf("%d", penaltyTakingA);
    printf("%s의 태클>>", nameA);
    scanf("%d", tacklingA);
    printf("%s의 개인기>>", nameA);
    scanf("%d", techniqueA);

    printf("--정신적 능력--\n");
    printf("%s의 적극성>>", nameA);
    scanf("%d", aggressionA);
    printf("%s의 예측력 >>", nameA);
    scanf("%d", anticipationA);
    printf("%s의 대담함>>", nameA);
    scanf("%d", braveryA);
    printf("%s의 침착함>>", nameA);
    scanf("%d", composureA);
    printf("%s의 집중력>>", nameA);
    scanf("%d", concentrationA);
    printf("%s의 판단력>>", nameA);
    scanf("%d", decisionsA);
    printf("%s의 승부욕>>", nameA);
    scanf("%d", determinationA);
    printf("%s의 천재성>>", nameA);
    scanf("%d", flairA);
    printf("%s의 리더십>>", nameA);
    scanf("%d", leardershipA);
    printf("%s의 공격위치선정>>", nameA);
    scanf("%d", offTheBallA);
    printf("%s의 수비위치선정>>", nameA);
    scanf("%d", positioningA);
    printf("%s의 팀워크>>", nameA);
    scanf("%d", teamworkA);
    printf("%s의 시야>>", nameA);
    scanf("%d", visionA);
    printf("%s의 활동량>>", nameA);
    scanf("%d", workRateA);

    printf("--신체 능력--\n");
    printf("%s의 순간속도>>", nameA);
    scanf("%d", accelerationA);
    printf("%s의 민첩성 >>", nameA);
    scanf("%d", agilityA);
    printf("%s의 균형감각>>", nameA);
    scanf("%d", balanceA);
    printf("%s의 점프거리>>", nameA);
    scanf("%d", jumpingReachA);
    printf("%s의 타고난 체력>>", nameA);
    scanf("%d", naturalFitnessA);
    printf("%s의 주력>>", nameA);
    scanf("%d", paceA);
    printf("%s의 지구력>>", nameA);
    scanf("%d", staminaA);
    printf("%s의 몸싸움>>", nameA);
    scanf("%d", strengthA);

    printf("%s의 정보 입력 완료", nameA);
    
    printf("--기본 정보--\n");
    printf("두번쨰 선수의 이름>>")
    scanf("%s", nameB);

    printf("--기술적 능력--\n");
    printf("%s의 코너킥>>", nameB);
    scanf("%d", cornersB);

    printf("%s의 크로스>>", nameB);
    scanf("%d", crossingB);
    printf("%s의 드리블>>", nameB);
    scanf("%d", dribblingB);
    printf("%s의 골 결정력>>", nameB);
    scanf("%d", finishingB);
    printf("%s의 볼 트래핑>>", nameB);
    scanf("%d", firstTouchB);
    printf("%s의 프리킥>>", nameB);
    scanf("%d", freeKickTakingB);
    printf("%s의 헤딩>>", nameB);
    scanf("%d", headingB);
    printf("%s의 중거리 슛>>", nameB);
    scanf("%d", longShotsB);
    printf("%s의 장거리 스로인>>", nameB);
    scanf("%d", longThrowsB);
    printf("%s의 일대일마크>>", nameB);
    scanf("%d", markingB);
    printf("%s의 패스>>", nameB);
    scanf("%d", passingB);
    printf("%s의 패널티킥>>", nameB);
    scanf("%d", penaltyTakingB);
    printf("%s의 태클>>", nameB);
    scanf("%d", tacklingB);
    printf("%s의 개인기>>", nameB);
    scanf("%d", techniqueB);

    printf("--정신적 능력--\n");
    printf("%s의 적극성>>", nameB);
    scanf("%d", aggressionB);
    printf("%s의 예측력 >>", nameB);
    scanf("%d", anticipationB);
    printf("%s의 대담함>>", nameB);
    scanf("%d", braveryB);
    printf("%s의 침착함>>", nameB);
    scanf("%d", composureB);
    printf("%s의 집중력>>", nameB);
    scanf("%d", concentrationB);
    printf("%s의 판단력>>", nameB);
    scanf("%d", decisionsB);
    printf("%s의 승부욕>>", nameB);
    scanf("%d", determinationB);
    printf("%s의 천재성>>", nameB);
    scanf("%d", flairB);
    printf("%s의 리더십>>", nameB);
    scanf("%d", leadershipB);
    printf("%s의 공격위치선정>>", nameB);
    scanf("%d", offTheBallB);
    printf("%s의 수비위치선정>>", nameB);
    scanf("%d", positioningB);
    printf("%s의 팀워크>>", nameB);
    scanf("%d", teamworkB);
    printf("%s의 시야>>", nameB);
    scanf("%d", visionB);
    printf("%s의 활동량>>", nameB);
    scanf("%d", workRateB);

    printf("--신체 능력--\n");
    printf("%s의 순간속도>>", nameB);
    scanf("%d", accelerationB);
    printf("%s의 민첩성 >>", nameB);
    scanf("%d", agilityB);
    printf("%s의 균형감각>>", nameB);
    scanf("%d", balanceB);
    printf("%s의 점프거리>>", nameB);
    scanf("%d", jumpingReachB);
    printf("%s의 타고난 체력>>", nameB);
    scanf("%d", naturalFitnessB);
    printf("%s의 주력>>", nameB);
    scanf("%d", paceB);
    printf("%s의 지구력>>", nameB);
    scanf("%d", staminaB);
    printf("%s의 몸싸움>>", nameB);
    scanf("%d", strengthB);
    printf("%s의 정보 입력 완료", nameB);


    
    return 0;
}
